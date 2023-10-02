#include <iostream>
using namespace std;
bool posibility(int arr[],int m,int n,int mid){
    int count=1;
    int board=0;
    for(int i=0;i<n;i++){
        if(board+arr[i]<=mid){
            board+=arr[i];
        }
        else{
            count++;
            if(count>n|| arr[i]>mid){
                return false;
            }
            board=arr[i];
        }
    }
    return true;
}
int partition(int arr[],int n,int m){
    int s=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int e=sum;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(posibility(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;

}
int main(){
    int arr[4]={5,5,5,5};
    std::cout<<"The anser is:"<<partition(arr,4,2);
    
return 0;
}