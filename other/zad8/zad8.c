#include<stdio.h>

void Print(int *arr, int n){
    if(n==0){
        return 0;
    }
    printf("%d, ", arr[n-1]);
    n--;
    Print(arr, n);
}

int main(){
    int n;
    printf("n=");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("[%d]:", i);
        scanf("%d", &arr[i]);
    }
    Print(arr, n);
}
