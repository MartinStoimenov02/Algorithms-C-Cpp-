// zad11.cpp : Defines the entry point for the console application.
//
#include<iostream>
using namespace std;


int main()
{
	int n=4, count=0;
	int arr[4];
	for(int i=0; i<n; i++){
		cout<<i<<":";
		cin>>arr[i];
	}
	for(int i=0; i<n-1; i++){
		if((arr[i]<0 && arr[i+1]>=0)||(arr[i]>=0 && arr[i+1]<0)){
			count++;
		}
	}
	cout<<"count:"<<count;
	system("PAUSE");
	return 0;
}

