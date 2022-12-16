#include<stdio.h>

int main(){
    int n, br=0, max=0, length=0;
    printf("n=");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("[%d]:", i);
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            while(arr[i]>arr[i+1]){
                printf("%d, ", arr[i]);
                i++;
                length++;
            }
            br++;
            length++;   //zashtoto ne vliza v if i taka ne otchita posledniq element ot namalqvashtata redica
            if(length>max){
                max=length;
            }
            printf("%d, length: %d\n", arr[i], length); //printirame i posledniq element ot namalavashtata redica
            length=0;
        }
    }
    printf("broq na namalavashtite redici e: %d, a nay golqmata e s: %d elementa!", br, max);
}

// test data: n=20
// 1 2 1 5 4 2 0 2 3 5 10 8 6 4 3 2 1 0 3 5
// izhod: broq na namalavashtite redici e: 3, a nay golqmata e s: 8 elementa!
