#include <stdio.h>

int main(void)
{
	int n;
	
	printf("番号=");
	scanf("%d", &n);
	
	if ((n == 2) || (n == 4) || (n == 5) || (n == 7) || (n == 8) || (n == 9) || (n == 10)) {
		printf("男子です\n");
	}
	else {
		printf("女子です\n");
	}
	return (0);
}