#include <stdio.h>

int main(void)
{
	int n, i;
	scanf("%d", &n); // 数字を入力させる
	
	// 1からnまでの数字を出力する
	for (i = 1; i <= n; i += 2) {
		printf("%d\n", i);
	}
	return (0);
}