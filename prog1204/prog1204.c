#include <stdio.h>

int main(void)
{
	int a;
	
	printf("1から10までの整数を入力してください\n");
	scanf("%d", &a);
	
	if (a > 0 && a <= 10) {
		printf("正解です\n");
	}
	else {
		printf("間違いです\n");
	}
	
	return (0);
}