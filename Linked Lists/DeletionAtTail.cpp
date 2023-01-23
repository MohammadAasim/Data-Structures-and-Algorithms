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
void deleteAtTail(node*&head){
    if(head==NULL){
        return;
    }
    node*prev=NULL;
    node*temp=head;
    while(temp->next!=NULL){
        prev=temp;
        temp=temp->next;
    }
    delete(temp);
    prev->next=NULL;
    return;
    
}
int main()
{
    node *head = NULL;
    insertAtHead(head,4);//4
    insertAtHead(head,3);//3 4
    insertAtHead(head,2);//2 3 4

    print(head);//2 3 4

    deleteAtTail(head);//2 3
    print(head);// 2 3

    return 0;
}