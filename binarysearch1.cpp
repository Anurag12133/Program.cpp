#include <iostream>
using namespace std;
 int binarysearch(int arr[],int n,int target){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
   while(s<=e){
               if(arr[mid]==target){
              return mid;
            }
         if(arr[mid]>target){
            s=mid+1;
        }
       else{
           e=mid-1;
       }
       mid=e+(e-s)/2;
   }
    return mid;
 }
// int linearsearch(int arr[],int n,int target){
//     int loc;
//     for(int i=0;i<n;i++){
//         if(target==arr[i]){
//             loc=i;
//             return loc;
//         }
//     }
//        if(loc==1){
//         cout<<"The element is found at position:"<<loc;
//        }
//        else{
//         cout<<"The elemnt is not found.";
//        }
// return 0;
// }
int main(){
    int arr[6]={2,3,4,5,6,8};
    bool ans=  binarysearch(arr,6,5);
    if(ans){
        cout<<"The element is found."<<endl;
    }
    else{
        cout<<"The element is not found:"<<endl;
    }

    bool ans=binarysearch(arr,6,5);
   
  

return 0;
}