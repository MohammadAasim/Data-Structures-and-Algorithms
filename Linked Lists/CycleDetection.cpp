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
bool setectCycle(node*head){
    node*slow = head;
    node*fast = head;

    while(fast!=NULL && fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;

        if(fast==slow){
            return true;
        }
    }
    return false;
}
int main()
{
    return 0;
}