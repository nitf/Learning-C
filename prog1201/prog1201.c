#include <stdio.h>

int main(void)
{
	int i;
	scanf("%d", &i);
	
	if (i % 3 == 0) {
		printf("%dは3の倍数です。\n", i);
	}
	else {
		printf("%dは3の倍数ではありません。\n", i);
	}
	
	return (0);
}