#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size:"<<endl;
    cin>>n;
    int *originalarray=new int[n];
       cout<<"Enter the array items:"<<endl;
    for(int i=0;i<n;i++){
     
        cin>>originalarray[i];
    }
    int deleteindex;
   
    cout<<"Enter the index where we want to delete  element in the excisting array:"<<endl;
    cin>>deleteindex;

    if(deleteindex<0 || deleteindex>n){
        cout<<"Invalid command:"<<endl;
        delete []originalarray;
        return 1;
    }
    int *newarray=new int[n-1];
    for(int i=0;i<deleteindex;i++){
        newarray[i]=originalarray[i];
    }
    for(int i=deleteindex+1;i<n;i++){
        newarray[i-1]=originalarray[i];
    }
    delete []originalarray;
    originalarray=newarray;
    n--;
    cout << "Updated array with the deletion of element: ";
    for(int i=0;i<n;i++){
        cout<<originalarray[i]<<" ";

    }
    cout<<endl;
    delete []originalarray;
return 0;
}