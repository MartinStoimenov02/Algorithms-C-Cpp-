#include <iostream>

using namespace std;

int main(){
	int n, sum=0;
	cout<<"n=";
	cin>>n;
	int arr[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<i<<"-"<<j<<":";
			cin>>arr[i][j];
		}
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	
	for(int i=0, j=n-1; i<n, j>=0; i++, j--){
		sum+=arr[i][j];
		cout<<arr[i][j]<<" ";
	}
	
	cout<<endl<<endl;
	
	cout<<"sum: "<<sum<<endl;
	
	return 0;
}
