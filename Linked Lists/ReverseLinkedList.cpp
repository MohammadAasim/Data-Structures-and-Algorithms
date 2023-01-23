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
void insertAtHead(node*&head,int d){
    if(head==NULL){
        head = new node(d);
        return;
    }
    node *n = new node(d);
    n->next=head;
    head=n;
}
node* takeinput(){
    int d;
    cin>>d;
    node * head=NULL;
    while(d!=-1){
        insertAtHead(head,d);
        cin>>d;
    }
    return head;
}
void print(node*head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}
ostream& operator<<(ostream &os,node*head){
    print(head);
    return os;
}

istream& operator>>(istream &is,node*&head){
    head = takeinput();
    return is;
}
void reverse(node*&head){
    node * C = head;
    node * P = NULL;
    node * N;
    while(C!=NULL){
        //save the next node
        N=C->next;
        //make the current node point to prev
        C->next=P;
        //Updata P and C take  them i step forward
        P=C;
        C=N;
    }
    head=P;
}
int main()
{
    node*head;
    cin>>head;
    cout<<head<<endl;
    reverse(head);
    cout<<head<<endl;

    return 0;
}