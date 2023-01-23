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


int main()
{
    // node*head=takeinput();
    // node*head2=takeinput();
    node*head;
    node*head2;
    cin>>head>>head2;
    cout<<head<<head2;
    return 0;
}