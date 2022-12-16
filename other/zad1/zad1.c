#include<stdlib.h>
#include<stdio.h>

int main(){

int n, j, sum1=0, sum2=0, s3=0, sum;
printf("n=(redove): ");
scanf("%d", &n);
float arr[n][n];


    for (int i = 0; i < n; i++) //initializing
    {
        for (int j = 0; j < n; j++)
        {
            printf("[[%d][%d]]: ", i, j);
            scanf("%f", &arr[i][j]);
        }
    }


    for (int i = 0; i < n; i++) //glaven diagonal
        {
            sum1+=arr[i][i];
        }

    printf("sum(glaven diagonal): %d\n", sum1);


    j = n-1;
    printf("\n");


    for (int i = 0; i < n; i++) //vtorostepenen diagonal
    {
            sum2+=arr[i][j];
            j--;
    }

    printf("sum(vtorostepenen diagonal): %d\n", sum2);


    printf("\n");


    for (int i = 0; i < n; i++) //redove
    {
        sum=s3;
        s3=0;
        for (int j = 0; j < n; j++)
        {
            s3+=arr[i][j];
        }
        if (s3!=sum && i!=0){
            printf("square is not magic :(");
            return 0;
        }
    }


    printf("\n");


    for (int i = 0; i < n; i++) //koloni
    {
        sum=s3;
        s3=0;
        for(j=0; j<n; j++){
            s3+=arr[j][i];
        }
        if (s3!=sum){
            printf("square is not magic :(");
            return 0;
        }
    }


    printf("sum(redove&koloni)%d\n\n", s3);


    if (sum1==sum2 && sum1==s3 && sum2==s3){
        printf("square is magic :)");
    }
    else{
        printf("square is not magic :(");
    }

    return 0;
}
