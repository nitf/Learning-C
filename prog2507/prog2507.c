#include <stdio.h>

int main(void)
{
	int x, y;
	
	printf("数値1=");
	scanf("%d", &x);
	
	printf("数値2=");
	scanf("%d", &y);
	
	switch ((x % 2 == 0) && (y % 2 == 0)) {
	  case 1:
		printf("両方偶数です\n");
		break;
	  case 0:
		printf("片方偶数です\n");
		break;
	}
	return (0);
}