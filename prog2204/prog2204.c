#include <stdio.h>

int main(void)
{
	int i;
	int sum;
	
	sum = 0;
	for (i = 1; i <= 10; i++) {
		sum += 1;
	}
	printf("1から10までの合計は%dです\n", sum);
	return (0);
}