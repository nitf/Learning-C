#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;
	
	printf("数値1=");
	scanf("%d", &a);
	
	printf("数値2=");
	scanf("%d", &b);
	
	printf("数値3=");
	scanf("%d", &c);
	
	printf("平均=%f", (a + b + c) / 3.0);
	
	return (0);
}