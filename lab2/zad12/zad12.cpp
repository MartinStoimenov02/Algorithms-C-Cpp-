// zad12.cpp : Defines the entry point for the console application.
//

#include<iostream>
using namespace std;


int main()
{
	int count=1;
	int arr[4], n=4;
	for(int i=0; i<n; i++){
		cout<<i<<":";
		cin>>arr[i];
	}

	for (int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(arr[i]+arr[j]<120){
				count=count*arr[i]*arr[j];
			}
		}
	}
	cout<<"count:"<<count<<endl;
	system("PAUSE");
	return 0;
}

