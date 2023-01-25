#include<iostream>
using namespace std;


int main()
{
 char arr[20]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
 int flag=0;
 cout<<"sentence:";
 cin>>arr;
 int count=0;
 for(int i=0; i<20; i++){
 if(arr[i]!=NULL){
 cout<<arr[i];
 count++;
 }
 }
 cout<<endl<<"count: "<<count<<endl;
 for(int i=0; i<count/2; i++){
 if(arr[i]!=arr[count-i-1]){
 cout<<"arr[i]: "<<arr[i]<<" - arr[count-i-1]: "<<arr[count-i-1]<<endl;
 flag=1;
 break;
 }
 }
 if(flag==0)
 cout<<"stringa e Palindrom"<<endl;
 else
 cout<<"stringa NE e Palindrom"<<endl;
 system("PAUSE");
 return 0;
}
