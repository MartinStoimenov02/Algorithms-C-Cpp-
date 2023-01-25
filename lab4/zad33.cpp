#include <iostream>

using namespace std;

const int br = 6; 
int i=-1;
int moneti[br] = {50,20,10,5,2,1}; 

int stotinki(int suma){
	if (suma==0){
		return 0;
	}
	
	i++;
	cout << "Broi moneti po " << moneti[i] << " st. = " << suma/moneti[i]<<endl;
	stotinki(suma%moneti[i]);
}

int main(){
	int sum;  
	cout << "Enter the number: ";
	cin >> sum; 
	stotinki(sum); 
	return 0;
}

