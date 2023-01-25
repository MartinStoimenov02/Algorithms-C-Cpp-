#include <stdio.h>

float x;
int n;

float stepen(float x, int n)
{
	if(n==0){
        printf("n=%d\n", n);
		return 1;
	}

	else
	{
		if(n>0){
            printf("n=%d\n", n);
            return (x*stepen(x, n-1));
		}

		else
			return (1/stepen(x, -n));
	}
}
int main()
{
	printf("x=");
	scanf("%f", &x);
	printf("n=");
	scanf("%d", &n);
	printf("%f^%d=%f\n", x, n, stepen(x, n));
	return 0;
}
