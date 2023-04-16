#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>d{1,2,3,10,14};
    d.push_back(16);//add 16 in last
    for(int x:d){
        cout<<x<<" ";
    }
    cout<<endl;
    d.pop_back();//delete last element that is 16
    for(int x:d){
        cout<<x<<" ";
    }
    cout<<endl;
    //insert in middle
    d.insert(d.begin()+3,100);
    for(int x:d){
        cout<<x<<" ";
    }
    cout<<endl;

    d.insert(d.begin()+3,4,100);
    for(int x:d){
        cout<<x<<" ";
    }
    cout<<endl;

    //erase some element
    d.erase(d.begin()+3);
    for(int x:d){
        cout<<x<<" ";
    }
    cout<<endl;
    //erase range
    d.erase(d.begin()+3,d.begin()+5);
    for(int x:d){
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<d.size()<<endl;
    cout<<d.capacity()<<endl;
    //we avoid the shrink
    d.resize(8);
    cout<<d.capacity()<<endl;


    //remove all the vector
    d.clear();
    cout<<d.size()<<endl;
    if(d.empty()){
        cout<<"empty"<<endl;
    }
    cout<<endl;

    d.push_back(10);
    d.push_back(11);
    d.push_back(12);
    d.push_back(13);
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    return 0;    
}