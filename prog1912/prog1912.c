#include <stdio.h>

int main(void)
{
	int i, x, ans;
	
	printf("x=");
	scanf("%d", &x);
	i = 1;
	ans = 0;
	
	while (i <= x) {
		ans += i;
		i++;
	}
	printf("1から%dまでの合計は%dです\n", x, ans);
	
	return (0);
}