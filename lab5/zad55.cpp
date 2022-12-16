#include<iostream>
#include <cstdlib>
#include<ctime>

using namespace std;

int n=10;

int *inputElements(){
    int *arr;
    arr=(int*)calloc(n, sizeof(int));
    srand(time(0));
    int randomNum;
    for(int i = 0; i<n; i++) { //generate 10 random numbers
		randomNum=rand()%100;
       cout << "The random number is: "<< randomNum<< endl;
       arr[i]=randomNum;
    }
	return arr;
}

int *sortArray(int *arr){
	int temp;
	for (int i=0; i<n-1; i++)
	{
		for (int j=0; j<n-i-1; j++)
		{
			if (arr[j] > arr[j + 1]){
            	temp=arr[j];
            	arr[j]=arr[j+1];
            	arr[j+1]=temp;
			}
		}  
	}
        
	return arr;
}

void printArray(int *arr){
	for(int i=0; i<n; i++){
		
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int getIndexOfElement(int value, int *arr){
	for(int i=0; i<n; i++){
		if(arr[i]==value){
			return i;
		}
	}
	return -1;
}

int main(){
	int *arr, value;
	arr=inputElements();
	printArray(arr);
	arr=sortArray(arr);
	printArray(arr);
	cout<<"value:";
	cin>>value;
	if(getIndexOfElement(value, arr)==-1){
		cout<<"there isn't element with this value!";
	}
	else{
		cout<<"index of "<<value<<" is: "<<getIndexOfElement(value, arr);
	}
	
	return 0;
}
