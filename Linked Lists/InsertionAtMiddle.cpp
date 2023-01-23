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
int length(node*head){
    int cnt=0;
    while(head!=NULL){
        cnt++;
        head=head->next;
    }
    return cnt;
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
void insertAtTail(node*&head,int d){
    if(head==NULL){
        head = new node(d);
        return;
    }
    node*tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    tail->next=new node(d);
    return;
}
void insertAtMiddle(node*&head,int d,int p){
    if(head==NULL || p==0){
        insertAtHead(head,d);
    }else if(p>length(head)){
        insertAtTail(head,d);
    }else{
        int jump=1;
        node * temp = head;
        while(jump<=p-1){
            temp=temp->next;
            jump++;
        }
        node*n=new node(d);
        n->next=temp->next;
        temp->next=n;
    }
}
int main()
{
    node * head = NULL;
    insertAtHead(head,4);//4
    insertAtHead(head,3);//3 4

    insertAtTail(head,6);//3 4 6
    insertAtTail(head,7);// 3 4 6 7

    insertAtMiddle(head,5,2);//3 4 5 6 7

    print(head);
    return 0;
}