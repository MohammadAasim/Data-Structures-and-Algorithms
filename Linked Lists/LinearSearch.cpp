#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node*next;

    //constructor
    node(int d){
        data=d;
        next=NULL;
    }    
};
//Passing pointer with refrence
void insertAtHead(node*&head,int d){
    if(head==NULL){
        head = new node(d);
        return;
    }
    node *n = new node(d);
    n->next=head;
    head=n;
}
void print(node*head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}
void insertAtTail(node*&head,int data){
    if(head==NULL){
        head = new node(data);
        return;
    }
    node*tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    tail->next=new node(data);
    return;
}
int length(node*head){
    int cnt=0;
    while(head!=NULL){
        cnt++;
        head=head->next;
    }
    return cnt;
}
//if p=0 insert at head ,p=2 inser at after 2 position ,p=length of linked list + 1 insert at end
void insertInMiddle(node*&head,int d,int p){
    //corner case
    if(head==NULL or p==0){
        insertAtHead(head,d);
    }else if(p>length(head)){
        insertAtTail(head,d);
    }else{
        //take p-1 jumps
        int jump=1;
        node*temp = head;
        while(jump<=p-1){
            temp=temp->next;
            jump++;
        }
        //create new node;
        node*n=new node(d);
        n->next=temp->next;
        temp->next=n;
    }
}

//Search Operation
//Linear Search
bool search(node*head,int key){
    node*temp = head;
    while(temp!=NULL){
        if(key==head->data){
            return true;
        }
        head=head->next;
    }
    return false;
}
//Recursively
bool searchRecursive(node*head,int key){
    if(head==NULL){
        return false;
    }
    //rec case check at head ,remaining linked lisr
    if(head->data==key){
        return true;
    }else{
        return searchRecursive(head->next,key);
    }
}
int main()
{
    node*head=NULL;
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);
    insertAtHead(head,0);

    insertInMiddle(head,4,3);

    insertAtTail(head,7);
    print(head);
    
    if(searchRecursive(head,2)){
        cout<<"Present"<<endl;
    }else{
        cout<<"Not present"<<endl;
    }
    return 0;
}