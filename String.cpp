// #include <iostream>
// #include<string>
// using namespace std;

// int main(){
//      char name[10];
//     cout<<"Enter the name:"<<endl;
//     cin>>name;
//     (name);

// return 0;
// }

// Plindrom strings.
// #include <iostream>
// using namespace std;
// char lowercase(char ch){
//     if(ch>='a' && ch<='z'){
//         return ch;
//     }
//     else{
//         char temp;
//         temp=ch-'A'+'a';
//          return temp;
//     }
   
// }
// bool  palindrome(char ch[],int l){
//     int s=0;
//     int e=l-1;
//     while(s<=e){
//         if(lowercase(ch[s]) != lowercase(ch[e])){
//            return 0;
        
//         }
//         else {
//             s++;
//             e--;
            
//         }
//     }
//     return 1;

// }
// int length(char name[]){
//     int count=0;
//     for(int i=0;name[i] != '\0' ;i++){
//         count++;
//     }
//     return count;
// }
// int main(){
//     char name[10];
//     cout<<"Enter the name:"<<endl;
//     cin>>name;
//     int len=length(name);
//     cout<<"Length of name is:"<<len<<endl;
//     cout<<"Check Planidrome:"<<palindrome(name,len);
// return 0;
// }

// Maximum occurig character

#include <iostream>
using namespace std;
char maxoccurchar(string s){
int arr[26]={0};
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int number=0;
        if(ch>='a' && ch<='z'){

number=ch-'a';
        }
        else{
            number=ch-'A';
        }
        arr[number]++;
    }
    int maxi=-1,ans=-1;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){ 
        ans=i;
        maxi=arr[i];
    }
    }
    return 'a'+ans;
}
int main(){
    string s;
    cout<<"Enter the string:"<<endl;
    cin>>s;
    cout<<"The maximum ooccuring character in string is:"<<maxoccurchar(s);
return 0;
}

// Replace spaces

// #include <iostream>
// using namespace std;
// string spaces(string &str){
//     string temp="";
//     for(int i=0;i<str.length();i++){
//         if(str[i]==' '){
//             temp.push_back('@');
//             temp.push_back('4');
//             temp.push_back('0');
//         }
//         else{
//             temp.push_back(str[i]);
//         }
//     }
//     return temp;
// }
// int main(){
//     string s;
//     cout<<"Enter the string:"<<endl;
//     cin>>s;
//     cout<<"After removing spaces the string is:"<<spaces(s);
    
// return 0;
// }
// #include <iostream>

// using namespace std;
// int main() {
//   int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
//   for(int i=0;i<3;i++){
//     for(int j=0;j<4;j++){
//       cout<<arr[i][j]<<" ";
//     }
//   }
// return 0;
// }