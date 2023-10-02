#include <iostream>
using namespace std;
bool ispossible(int arr[], int k ,int mid){
int count=1;
int lastpos=arr[0];
for(int i=0;i<k;i++){
    if(arr[i]-lastpos>=mid){
        count++;
        if(count==k){
            return true;
        }
        lastpos=arr[i];
    }
}
return false;
}
int fun(int arr[],int size,int k){
    int s=0;
    int maxi=-1;
    for(int i=0;i<size;i++){
        maxi=max(maxi,arr[i]);
    }
    int e=maxi;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(ispossible(arr, size ,mid)){
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
int main(){
    int arr[5]={1,2,3,4,6};
    cout<<"The maximum distance is:"<<fun(arr,5,2);
    
return 0;
}