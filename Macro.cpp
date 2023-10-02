#include <iostream>
#define MIN (((a)<(b))?(a):(b))
using namespace std;

int main(){
    int value1,value2;
    cout<<"Enter the values:"<<endl;
    cin>>value1>>value2;
    cout<<"MINIMUM value among value1 nad value2is:"<< min(value1,value2);
    

    
return 0;
}