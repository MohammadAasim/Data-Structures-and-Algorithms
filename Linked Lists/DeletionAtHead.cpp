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
void deleteAtHead(node*&head){
    if(head==NULL){
        return;
    }
    node * temp = head->next;
    delete(head);
    head=temp;
}
int main()
{
    node *head = NULL;
    insertAtHead(head,4);//4
    insertAtHead(head,3);//3 4
    insertAtHead(head,2);//2 3 4

    print(head);//2 3 4

    deleteAtHead(head);//3 4
    print(head);// 3 4

    return 0;
}