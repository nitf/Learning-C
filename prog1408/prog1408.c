#include <stdio.h>

int main(void)
{
	int score;
	
	printf("点数=");
	scanf("%d", &score);
	
	if (score >= 60) {
		printf("合格です\n");
	}
	else {
		printf("赤点です\n");
	}
	
	return (0);
}