#include <stdio.h>

int main(void)
{
	
	int a;
	int b;
	int ans;
	
	printf("a=");
	scanf("%d", &a);
	
	printf("b=");
	scanf("%d", &b);
	
	if (a > b) {
		ans = a - b;
	}
	else {
		ans = b - a;
	}
	
	printf("aとbの差の最大値は%dです\n", ans);
	
	return (0);
}