#include <iostream>
#include<queue>
using namespace std;

int main(){
    //This is for max heap.
    priority_queue<int> maxi;
    maxi.push(21);
    maxi.push(22);
    maxi.push(222);
    maxi.push(2210);
    int size=maxi.size();
    for(int i=0;i<size;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;
// This is for min heap
priority_queue<int,vector<int>,greater <int>>mini;
mini.push(23);
mini.push(233);
mini.push(2333);
mini.push(23333);
int size1=mini.size();
for(int i=0;i<size;i++){
    cout<<mini.top()<<" ";
    mini.pop();
}
cout<<endl;
cout<<"Affter printing the size of queue is:"<<maxi.size()<<endl;
cout<<"Affter printing the size of queue is:"<<maxi.size();
return 0;
}