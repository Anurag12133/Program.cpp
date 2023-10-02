#include <iostream>
using namespace std;
void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++)
            if(arr[j]<arr[minindex])
                minindex=j;  
    swap(arr[minindex],arr[i]);
}
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++) {
        cout << arr[i] << " ";
        cout << endl;
    }
}
int main(){
    int arr[5]={10,2,67,1,4};
    selectionsort(arr,5);
    printArray(arr,5);
return 0;
}