#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a=0,b=1,nextterm;
    cout<<a<<endl<<b<<endl;
    for(int i=0;i<=n;i++){
        nextterm=a+b;
        a=b;
        b=nextterm;
        cout<<nextterm<<endl;
    }
return 0;
}