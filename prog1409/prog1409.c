#include <stdio.h>

int main(void)
{
	int day;
	
	printf("日にち=");
	scanf("%d", &day);
	
	if ((day >= 1) && (day <= 6)) {
		printf("授業日です\n");
	}
	else if (day == 7) {
		printf("予備日です\n");
	}
	else if ((day >= 8) && (day <= 14)) {
		printf("試験日です\n");
	}
	else if ((day >= 15) && (day <= 16)) {
		printf("予備日です\n");
	}
	else if ((day >= 17) && (day <= 23)) {
		printf("試験返却日\n");
	}
	else {
		printf("夏休みです\n");
	}
	return (0);
}