#include <bits/stdc++.h>
using namespace std;
//Sort an unsorted Linked list
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

node* midpoint(node*head){
    if(head==NULL or head->next==NULL){
        return head;
    }
    node *slow = head;
    node *fast = head->next;
    while(fast!=NULL && fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
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
node*mergeSort(node*head){
    if(head==NULL or head->next==NULL){
        return head;
    }
    //rec
    //1.break
    node *mid=midpoint(head);
    node *a = head;
    node *b = mid->next;
    mid->next=NULL;
    //2. rec sort
    a = mergeSort(a);
    b = mergeSort(b);
    
    //3.merge them
    node *c = merge(a,b);
    return c;
}
int main()
{
    node*head;
    cin>>head;
    cout<<head<<endl;

    head=mergeSort(head);
    cout<<head<<endl;
    return 0;
}