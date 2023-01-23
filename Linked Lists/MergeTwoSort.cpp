#include <bits/stdc++.h>
using namespace std;
//Merge Two Sorted Linked Lists into One
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
node*merge(node*a,node*b){
    //base case;
    if(a==NULL){
        return b;
    }
    if(b==NULL){
        return a;
    }
    //take a head pointer
    node*c;
    if(a->data < b->data){
        c=a;
        c->next=merge(a->next,b);
    }else{
        c=b;
        c->next=merge(a,b->next);
    }
    return c;
}
int main()
{
    node *head1;
    node *head2;

    cin>>head1>>head2;
    cout<<head1<<head2;

    node *newHead = merge(head1,head2);
    cout<<newHead;
    return 0;
}