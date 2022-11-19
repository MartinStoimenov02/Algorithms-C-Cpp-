#include<stdio.h>
int sum=0;

int sumArr(int *arr, int n){
    sum=sum+arr[n];
    if(n==0){
        return sum;
    }
    sumArr(arr, n-1);
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

    for(int i=0; i<n; i++){
        printf("%d, ", arr[i]);
    }

    printf("sum: %d", sumArr(arr, n--));
}
