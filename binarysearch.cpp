#include <iostream>
using namespace std;
int binarysearch(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
      mid=start+(end-start)/2;
    }
       return -1;
}

int main(){
    int arr[5]={1,2,3,4,5};
    int brr[6]={10,11,12,13,14,15};
    cout<<"Index of 4 elemnet is:"<<binarysearch(brr,5,1)<<endl;
    cout<<"Index of 14 element is:"<<binarysearch(brr,6,14);
return 0;
}