#include<stdio.h>

int main(){
    int n, flag=0;
    printf("n=(min: 3)");
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++){
        printf("[%d]:", i);
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n-2; i+=2){
        if(arr[i]<arr[i+1] && arr[i+1]>arr[i+2]){
            flag=1;
        }
        else{
            flag=0;
            break;
        }
    }

    if(flag==1){
        printf("YES!");
    }
    else{
        printf("NO!");
    }
}

/*Test data:
    1<10>2<11>3 -> YES!
    1<2>3<4>1 -> NO!
*/
