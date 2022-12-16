//Kursova rabota SAA - zad. 9
//Martin Stoimenov (121221049), gr. 46

#include<iostream>

using namespace std;

int sum=0;

int sumNumber(int n){
	
	if(n==0){
		return sum;
	}
	
	sum+=n%10;
	n=n/10;
	
	sumNumber(n);
}

int main(){
	int n;
	do{
		cout<<"n=";
		cin>>n;
	}while(n<10 || n>10000);
	cout<<sumNumber(n);
	return 0;
}
