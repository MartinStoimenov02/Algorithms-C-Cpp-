#include<stdio.h>

int Print(int *arr, int n){    //recursivna funkciq
    if(n==0){                   //ako parametura "n" e stanal raven na nula, prekratqvame izpulnenieto na funkciqta
        return 0;
    }
    printf("%d, ", arr[n-1]);   //printirame elementa
    n--;                        //namalqvame parametura "n"
    Print(arr, n);              //izvikvame otnovo funkciqta, veche s namalen parametur "n"
}

int main(){
    int n;
    printf("n=");
    scanf("%d", &n);    //vuvezhdame broq elementi na masiva
    int arr[n];
    for(int i=0; i<n; i++){ //vuvezhdame stoynostite na masiva
        printf("[%d]:", i);
        scanf("%d", &arr[i]);
    }
    Print(arr, n);  //izvikvame funkciqta za purvi put
}
