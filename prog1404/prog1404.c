#include <stdio.h>

int main(void)
{
	int i;
	
	printf("整数=");
	scanf("%d", &i);
	
	if ((i % 2 == 0) && (i % 3 == 0)) {
		printf("6の倍数です\n");
	}
	else {
		printf("6の倍数ではありません\n");
	}
	
	return (0);
}