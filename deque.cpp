#include <iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;
    d.push_front(1);
    d.push_back(3);
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Size of deque is:"<<d.size()<<endl;
    d.pop_back();
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"After pop the size is:"<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
     for(int i:d){
        cout<<i<<" ";
    }
return 0;
}