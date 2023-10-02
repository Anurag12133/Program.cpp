//factoroial
// #include <iostream>
// using namespace std;
// int factorial(int n){
//     if(n==0){
//         return 1;
        
//         }
//         return n*factorial(n-1);
//     }

// int main(){
//     int n;
//     cin>>n;
//     cout<<"Factorial of number is:"<<factorial(n);
// return 0;
// }

//power
// #include <iostream>
// using namespace std;
// int power(int n){
//     if(n==0){
//         return 1;
//     }
//     return 2*power(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<"Answer is:"<<power(n);
// return 0;
// }
//Fibonacci series
// #include <iostream>
// using namespace std;
// int fibonacci(int n){
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }

//     int ans=fibonacci(n-1)+fibonacci(n-2);
//     return ans;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<"Answer is:"<<fibonacci(n);
// return 0;
// }
//Say digits
// #include <iostream>
// using namespace std;
// void saydigits(int n,string arr[]){
//     if(n==0){
//         return;
//     }
//     int digit=n%10;
//     n=n/10;
//     saydigits(n,arr);
//     cout<<arr[digit]<<" ";
// }
// int main(){
  
//     string arr[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","eight","nine"};
//       int n;
//     cin>>n;
//     saydigits(n,arr);
// return 0;
// }
// Sorting using recurson
// #include <iostream>
// using namespace std;
// bool issorted(int arr[],int size){
//     if(size==0 || size==1)
//     return true;
//    if(arr[0]> arr[1]){
//     return false;
//    }
//    else{
//    bool remainingpart=issorted(arr+1,size-1);
//    return remainingpart;
//    }
   

// }
// int main(){
//     int arr[10]={3,4,2,5,1,7,6,10,9,0};
//    bool ans=issorted(arr,10);
//   if(ans){ 
//   cout<<"The array is sorted."<<endl;
//   }
//   else{
//     cout<<"The array is not sorted."<<endl;
//   }
// return 0;
// }
//sum of all elements in an array
// #include <iostream>
// using namespace std;
// int sumofarray(int arr[],int size){
//     int sum=0;
//     if(size==0){
//         return 0;
//     }
//     else{
//     sum=sum+arr[0]+sumofarray(arr+1,size-1);
//     }
    
// }
// int main(){
//     int arr[5]={2,3,5,4,6};
//     int sum=sumofarray(arr,5);
//     cout<<"The sum of all elements of array is:"<<sum;
// return 0;
// }
//binary search
// #include <iostream>
// using namespace std;
// bool binarysearch(int arr[],int s,int e,int key,int size){
//      s=0;
//      e=size-1;
//     int mid=s+(e-s)/2;

//         if(s>e){
//             return false;
    
//         }
//        else if(arr[mid]==key){
//             return true;
//         }
//        else  if(arr[mid]<key){
//             return binarysearch(arr,mid+1,e,key,size);
//         }
//         else{
//             return binarysearch(arr,s,mid-1,key,size);
//         }
//     }

// int main(){
//     int arr[6]={2,3,4,5,6,7};
//     int size = 6;
//     int key=9;
//     bool ans=binarysearch(arr,0,5,key,size);
//     if(ans){ 
//     cout<<"The element is present."<<endl;
//     }
//     else{
//         cout<<"The element is not present."<<endl;
//     }
    
// return 0;
// }
// #include <iostream>
// #include <string>
// using namespace std;
// void reversestring(int i,int j,string &s){
//     i=0;
//     j=s.length()-1;
//     if(i>j){
//         return;
//     }
   
//         swap(s[i],s[j]);
//         i++;
//         j--;
    
//     reversestring(i,j,s);
// }
// int main(){
//     string name="ABCDE";
//  reversestring(0,name.length()-1,name);
//  cout<<name<<endl;
      
// return 0;
// }
//Check palimdrome
// #include <iostream>
// using namespace std;
// bool checkpalindrome(string str,int i,int j){
//     if(i>j){
//         return false;
//     }
//     if(str[i]!=str[j]){
//         return false;
//     }
//     else{
//         return checkpalindrome(str,i+1,j-1);
//     }
// }
// int main(){
//     string name="tot";
//     bool ans=checkpalindrome(name,0,name.length()-1);
//     if(ans){
//         cout<<"It is a palindrome";
//     }
//     else {
//         cout<<"It is not palindrome.";
//     }
// return 0;
// }
//Power 
// #include <iostream>
// using namespace std;
// int power(int a, int b){
//     if(b==0){
//         return 0;
//     }
//     if(b==1){
//         return a;
//     }
//     int ans= power(a,b/2);
//     if(b%2==0){
//         return ans*ans;

//     }
//     else{
//         return a*ans*ans;
//     }
//     }

// int main(){
//     int a,b;
//     cin>>a>>b;
//     int ans=power(a,b);
//     cout<<"Answer is:"<<ans;
// return 0;
// }
//SORTING
// #include <iostream>
// using namespace std;
// void sorting(int *arr,int size){
//     if(size==0 || size==1){
//         return ;
//     }
//     for(int i=0;i<size-1;i++){
//         if(arr[i]>arr[i+1]){
//             swap(arr[i],arr[i+1]);
//         }
//     }
//     sorting(arr,size-1);
// }
// int main(){
//     int arr[5]={2,1,4,9,8};
//     sorting(arr,5);
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
// return 0;
// }
//selction sort
// #include <iostream>
// using namespace std;
// void selectionsort(int arr[],int size){
//     if(size==1 || size==0){
//         return ;
//     }
//    int miniindex=arr[0];
//    if(arr[miniindex]>arr[miniindex+1]){
//     swap(arr[miniindex],arr[miniindex+1]);
//    }
//    selectionsort(arr,size);
// }

// int main(){
//     int arr[5]={45,23,34,11,9};
//     selectionsort(arr,5);
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
// return 0;
// }
//Merge sort
// #include <iostream>
// using namespace std;
// void merge(int *arr,int s,int e){
//     int mid=s+(e-s)/2;
//     int len1=mid-s+1;
//     int len2=e-mid;
//     int *arr1=new int[len1];
//     int *arr2=new int[len2];
//     int k=s;
//     for(int i=0;i<len1;i++){
//         arr1[i]=arr[k++];
//     }
//      for(int i=0;i<len2;i++){
//         arr2[i]=arr[k++];
//     }
//     int index1=0;
//     int index2=0;
//     while(index1<len1 && index2<len2){
//         if(arr1[index1]<arr2[index2]){
//             arr[k++]=arr1[index1++];

//         }
//         else{
//             arr[k++]=arr2[index2++];
//         }

//     }
//     while(index1<len1){
//          arr[k++]=arr1[index1++];
//     }
//     while(index2<len2){
//          arr[k++]=arr2[index2++];
//         }
//         delete []arr1;
//         delete []arr2;
//     }


// void mergesortarray(int *arr,int s,int e){ 
//     if(s>=e){
//         return ;
//     }
// int mid=s+(e-s)/2;
// mergesortarray(arr,mid+1,e);
// mergesortarray(arr,s,mid);
// merge(arr,s,e);
// }
// int main(){
//     int arr[10]={9,7,5,3,1,8,6,4,2,0};
//     int n=10;
//     mergesortarray(arr,0,n-1);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
// return 0;
// }

