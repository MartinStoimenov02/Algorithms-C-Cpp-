#include <stdio.h>
#include<stdlib.h>

int main(){
    int n, br, dolni, gorni, count =0;
    printf("n=");
    scanf("%d", &n);

    int arr[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("[%d][%d]:", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    br=n+(n-2);

    for (int k=1; k<=br/2; k++){
        dolni=0;
        gorni=0;
        for(int i=k, j=0; i<n, j<n-k; i++, j++){
            if(arr[i][j]!=0){
                dolni=1;
            }
            if(arr[j][i]!=0){
                gorni=1;
            }
        }
        if(dolni==0){
            count++;
        }
        if(gorni==0){
            count++;
        }
        printf("\n");
    }

    printf("broq na diagonalite s nulevi elementi, usporedni na glavniq e: %d", count);

    return 0;
}
