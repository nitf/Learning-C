#include <stdio.h>

int main(void)
{
	int n = 0;
	
	// nの剰余が1でなければnを入力させる
	while (n % 10 != 1) {
		scanf("%d", &n);
	}
	
	return (0);
}