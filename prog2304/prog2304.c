#include <stdio.h>

int main(void)
{
	int n;
	int i, j;
	
	// iが9になるまでjを9回回す
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			// 9回結果を出力
			printf(" %d * %d = %.2d", i, j, i * j);
		}
		// 9回回し終えたら改行
		printf("\n");
	}
	return (0);
}