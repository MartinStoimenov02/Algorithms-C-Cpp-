// zad13.cpp : Defines the entry point for the console application.
//

#include<iostream>
using namespace std;

int main()
{
	int count=0;
	int arr[10], n=10;
	for(int i=0; i<n; i++){
		cout<<i<<":";
		cin>>arr[i];
	}

	for(int i=0; i<n; i++){
		if(arr[i]==arr[i+1]){
			count++;
			while(arr[i]==arr[i+1]){
				i++;
			}
		}
	}

	cout<<"count:"<<count<<endl;

	system("PAUSE");

	return 0;
}

