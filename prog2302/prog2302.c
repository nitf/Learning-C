#include <stdio.h>

int main(void)
{
	int n, i;
	scanf("%d", &n); // 数字を入力させる
	
	i = 1;
	// 1からnまでを出力する
	while (i <= n) {
		printf("%d\n", i);
		i += 2;
	}
	return (0);
}