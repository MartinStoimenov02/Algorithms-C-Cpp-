#include <stdio.h>

int sum(int a, int b){
	if(b >= a)
        return b + sum(a,b-1);
    else
        return b;
}

int main(){
	int a,b, result=0;
	inputA:
	printf("A(1-10001)=");
	scanf("%d",&a);
	if(a<1 || a>10001) {
		printf("not correct number!\n");
		goto inputA;
	}

	inputB:
	printf("B(1-10001)=");
	scanf("%d",&b);
	if(b<1 || b>10001) {
		printf("not correct number!\n");
		goto inputB;
	}

	if( b<a) {
		printf("A must be less than B!\n");
		goto inputA;
	}

	printf("The result is : %d\n", sum(a,b));
	return 0;
}
