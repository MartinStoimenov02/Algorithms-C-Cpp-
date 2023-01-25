#include<iostream>

using namespace std;

int arr[100];
int index=0;

int transform(int n){
 if(n==0){
 return 0;
 }

 arr[index]=n%2;
 index++;

 transform(n/2);
}

int main()
{
 int n;
 cout<<"n=";
 cin>>n;
 transform(n);
 for(int i=index-1; i>=0; i--){
 cout<<arr[i]<<" ";
 }
 cout<<endl;
 system("PAUSE");
 return 0;
}
