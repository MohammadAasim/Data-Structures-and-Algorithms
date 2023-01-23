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
    node*head=NULL;
    while(cin>>d){
        insertAtHead(head,d);
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
int main()
{   
    node *head = takeinput();

    print(head);

    return 0;
}