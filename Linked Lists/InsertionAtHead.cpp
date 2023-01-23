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
int length(node*head){
    int count=0;
    while(head!=NULL){
        count++;
        head=head->next;
    }
    return count;
}
void print(node*head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}
//Call by refrence
void InsertAtHead(node*&head,int d){
    if(head==NULL){
        head = new node(d);
        return;
    }
    node *n = new node(d);
    n->next=head;
    head=n;
}
int main()
{
    node *head = NULL;

    InsertAtHead(head,3);
    InsertAtHead(head,2);
    InsertAtHead(head,1);

    print(head);
    return 0;
}