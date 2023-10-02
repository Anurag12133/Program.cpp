#include <iostream>
using namespace std;

 long long int squareroot(int num){
    int s=0;
    int e=num;
   long long int mid=s+(e-s)/2;
    long long int ans=0;
    while(s<=e){
        if(mid*mid==num){
            return mid;
        }
        else if(mid*mid<num){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
double moreprecision(int n,int pre,int tempsol){
double factor=1;
double ans=tempsol;
for(int i=0;i<pre;i++){
    factor=factor/10;

for(double j=ans;j*j<n;j=j+factor){
     ans=j;
}
}
return ans;
}
int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    int tempsol=squareroot(n);
   cout<<"Square root  of num is:"<<moreprecision(n,3,tempsol);
    
return 0;
}

