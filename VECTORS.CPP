#include <iostream>
#include<vector>
using namespace std;

int main(){
   vector<int>box={1,2,3,4,5};
   cout<<"Capacity of vector is:"<<box.capacity()<<endl; 
   box.push_back(7);
   cout<<"Capacity of vector is:"<<box.capacity()<<endl; 
    cout<<"elemnet st selected index  is:"<<box.at(2)<<endl; 
    for(int i:box){
        cout<<i<<" ";
    }
return 0;
}