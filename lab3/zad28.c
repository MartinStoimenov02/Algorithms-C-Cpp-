#include<stdio.h>
int sum=0;

int DigitNumber(int n, int d){
    if(n%10==d){
        return d;
    }
    if (n==0){
        return 0;
    }
    DigitNumber(n/10, d);
}

int main(){
    int digit, number;
    printf("number=");
    scanf("%d", &number);
    printf("digit=");
    scanf("%d", &digit);
    if(DigitNumber(number, digit)==0){
        printf("%d ne e namereno!", digit);
    }
    else{
        printf("%d e namereno", DigitNumber(number, digit));
    }
}
