#include <iostream>

using namespace std;

int main(){
	int n, m, index=0, sum=0;
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
	
	int arr2[2+n];
	
	for(int i=0; i<n; i++){
		sum+=arr[i][i];
	}
	
	arr2[index]=sum;
	index++;
	sum=0;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			sum+=arr[i][j];
		}
		arr2[index]=sum;
		index++;
		sum=0;
	}
	
	for(int i=1; i<n; i++){
		for(int j=0; j<i; j++){
			if(arr[i][j]<i+j){
				sum++;
				cout<<"("<<arr[i][j]<<")"<<" ";
			}
			else{
				cout<<arr[i][j]<<" ";
			}
		}
		cout<<endl;
	}
	arr2[index]=sum;
	index++;
	cout<<endl;
	
	for(int i=0; i<index; i++){
		cout<<arr2[i]<<" ";
	}
	
	cout<<endl;
	
	return 0;
}
