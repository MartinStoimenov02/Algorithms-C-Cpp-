#include<iostream>

using namespace std;

int main()
{
 int n, count=0;
 cout<<"n=";
 cin>>n;
 int arr[n][n];
 for(int i=0; i<n; i++){
 for(int j=0; j<n; j++){
 cout<<"["<<i<<"] ["<<j<<"]:";
 cin>>arr[i][j];
 }
 }

 for(int i=0; i<n; i++){
 for(int j=0; j<n; j++){
 cout<<arr[i][j]<<" ";
 }
 cout<<endl;
 }

 int br;
 br=n+(n-2);

 for(int i=0; i<n; i++){
 for(int j=i; j<n; j++){
 if(i==j){
 continue;
 }
 if(arr[i][j]<arr[j][i]){
 cout<<arr[i][j]<<" e po-malko ot "<<arr[j][i]<<endl;
 count++;
 }
 }
 }

 cout<<"broya na simetrichnite lementi, gorniq<ot dolniq e: "<<count<<endl;

 system("PAUSE");
 return 0;
}

