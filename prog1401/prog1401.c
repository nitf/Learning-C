#include <stdio.h>

int main(void)
{
	int a;
	
	printf("a=");
	scanf("%d", &a);
	
	if ((0 < a) && (a <= 100)) {
		printf("aは100以下の自然数です\n");
	}
	else {
		printf("aは負または100より大きい数です");
	}
	return (0);
}