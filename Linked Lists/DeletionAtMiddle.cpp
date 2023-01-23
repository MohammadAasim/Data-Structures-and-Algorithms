#include <bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node*next;

    node(int d){
        data=d;
        next=NULL;
    }
};
void print(node*head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}
void insertAtHead(node*&head,int d){
    if(head==NULL){
        head = new node(d);
        return;
    }
    node *n = new node(d);
    n->next = head;
    head=n;
}
void deleteAtMiddle(node* head, int key) {
    node* temp = head, *prev;
    if (temp != NULL && temp->data == key) {
        head = temp->next;  
        delete temp;              
        return;
    }
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) return;
    prev->next = temp->next;
    delete temp;
}

int main()
{
    node *head = NULL;
    insertAtHead(head,4);//4
    insertAtHead(head,3);//3 4
    insertAtHead(head,2);//2 3 4

    print(head);//2 3 4

    deleteAtMiddle(head,3);//2 4
    print(head);// 2 4

    return 0;
}