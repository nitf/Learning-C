#include <stdio.h>

int main(void)
{
	int i;
	
	printf("整数=");
	scanf("%d", &i);
	
	if (!(i % 5 == 0)) {
		printf("5で割り切れません\n");
	}
	else {
		printf("5で割り切れます\n");
	}
	
	return (0);
}