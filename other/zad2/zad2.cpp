//Kursova rabota SAA - zad. 2
//Martin Stoimenov (121221049), gr. 46

#include <iostream>

using namespace std;

int main(){
	int n, m, maxRow=0, maxCol=0, max, br=0, count=0, izh=0;
	cout<<"n=";
	cin>>n;
	cout<<"m=";
	cin>>m;
	int arr[n][m];
	//initialize elements of array:
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<<i<<":"<<j<<":";
			cin>>arr[i][j];
		}
	}
	
	//find max element of each row:
	for(int i=0; i<n; i++){
		max=arr[i][0];
		maxRow=0;
		maxCol=i;
		for(int j=0; j<m; j++){
			if(arr[i][j]>max){
				max=arr[i][j];
				maxRow=j;
				maxCol=i;
			}
		}
		
		//find if max element is repeated in the current row:
		izh=0;
		for(int x=0; x<m; x++){
			if(arr[i][x]==max && x!=maxRow){
				cout<<"->repeated element in row "<<i<<endl;
				izh=1;
			}
		}
		if(izh==1){
			continue;
		}
		
		cout<<"i="<<i<<"; max:"<<max<<"; row: "<<maxCol<<"; col: "<<maxRow<<endl;
		
		//fing if there is biggest or repeated element in current column:
		for(int k=0; k<n; k++){
			if(arr[k][maxRow]>=max && k!=maxCol){
				max=arr[k][maxRow];
				maxCol=k;
				cout<<'\t'<<"k="<<k<<"; max: "<<max<<"; row: "<<maxCol<<"; col: "<<maxRow<<endl;
				cout<<'\t'<<"->found bigger or repeated element in col!"<<endl;
				br=0;
				break;
			}
			
			else{
				cout<<'\t'<<"k="<<k<<"; max: "<<max<<"; row: "<<maxCol<<"; col: "<<maxRow<<endl;
				br=1;
			}
		}
		if(br==1){
			count++;
			cout<<"->saddle point is: "<<max<<" in "<<maxCol<<" rol and "<<maxRow<<" col"<<endl;
		}
	}
	cout<<"count of saddle points: "<<count<<endl;
	return 0;
}


/*
test data:

 5  6  3  4  1
(9) 8  5  7  2
 1  2  3  2  2
 0  1  0  2 (9)
output: 2 seddle points

5  6  3  4  1
9  8  9  7  2
1  2  3  2  2
0  1  0  2 (9)
output: 1 seddle points

5  6  3  4  1
8  9  5  7  2
1  9  3  2  2
0  1  0  2 (9)
output: 1 seddle points
*/
