#include <iostream>
using namespace std;
int firstoccurrance(int arr[],int n,int k){
int s=0;
int e=n-1;
int ans=0;
int mid=s+(e-s)/2;
while(s<=e){
    if(arr[mid]==k){
        ans=mid;
        e=mid-1;
    }
    else if(k>arr[mid]){
        s=mid+1;
    }
    else {
        e=mid-1;
    }
    mid=s+(e-s)/2;
}
return ans;
}
int lastoccurrance(int arr[],int n,int k){
int s=0;
int e=n-1;
int ans=0;
int mid=s+(e-s)/2;
while(s<=e){
    if(arr[mid]==k){
        ans=mid;
        s=mid+1;
    }
    else if(k>arr[mid]){
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
    int arr[5]={1,2,5,3,5};
    cout<<"The index of first occurance of key is:"<<firstoccurrance(arr,5,5)<<endl;
    cout<<"The index of last occurance of key is:"<<lastoccurrance(arr,5,5);
return 0;
}