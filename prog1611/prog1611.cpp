#include <stdio.h>

int main(void)
{
	float a, b;
	
	printf("aをbで割ります\n");
	
	printf("a=");
	scanf("%f", &a);
	
	printf("b=");
	scanf("%f", &b);
	
	if (b == 0) {
		printf("0で割ることはできません\n");
		return (0);
	}
	
	printf("%.6f / %.6f = %.6f\n", a, b, a / b);
	
	return (0);
}