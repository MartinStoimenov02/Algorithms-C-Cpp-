#include <iostream>

using namespace std;

int main(){
	int n, m, sum=0;
	cout<<"n=";
	cin>>n;
	cout<<"m=";
	cin>>m;
	int arr[n][m];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<<i<<"-"<<j<<":";
			cin>>arr[i][j];
		}
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl;
	
	for (int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(i==0 || i==n-1){
				cout<<arr[i][j]<<" ";
				sum+=arr[i][j];
			}
			else{
				if(j==0 || j==m-1){
					cout<<arr[i][j]<<" ";
					sum+=arr[i][j];
				}
				else{
					cout<<"  ";
				}
			}
		}
		cout<<endl;
	}	
	cout<<endl<<"sum: "<<sum<<endl;
	return 0;
}
