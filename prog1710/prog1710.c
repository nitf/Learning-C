#include <stdio.h>

int main(void)
{
	int i;
	int ans = 0;
	
    for (i = 1; i <= 10; i++) {
		ans += i;
    }
	printf("1から10までの合計は%dです\n", ans);
    return 0;
}