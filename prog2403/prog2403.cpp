#include <stdio.h>

int main(void)
{
	int x;
	int i, ans = 0;
	printf("x=");
	scanf("%d", &x);
	
	for (i = 2; i <= x; i += 2) {
		ans += i;
	}
	printf("100以下の偶数の合計は%dです\n", ans);

	return (0);
}