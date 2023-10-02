#include <iostream>
using namespace std;

int main()
{
  int rows=4;
  int **jaggedarray= new int* [rows];
  int col[]={5,2,4,3};
  for(int i=0;i<rows;i++){
    jaggedarray[i]=new int[col[i]];
  }
  int num=1;
  for(int i=0;i<rows;i++){
    for(int j=0;j<col[i];j++){
        jaggedarray[i][j]=num++;
    }
  }
  for(int i=0;i<rows;i++){
    for(int j=0;j<col[i];j++){
        cout<<jaggedarray[i][j]<<" ";
    }cout<<endl;
  }
  for(int i=0;i<rows;i++){
delete []jaggedarray[i];
  }
  delete []jaggedarray;
return 0;
}