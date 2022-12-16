#include <stdio.h>

int main() {
    int n, count = 0;
    printf("n=");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("[%d]:", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++){
        if (arr[i] != 0){
            arr[count] = arr[i];
            count++;
        }
    }

    while (count < n){
        arr[count] = 0;
        count++;
    }

    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
