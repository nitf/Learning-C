#include <stdio.h>

int main(void)
{
	int i, n, ans;
	int input;
	
	i = 0;
	ans = 0;
	
	printf("整数を何回入力しますか:");
	scanf("%d", &n);
	
	while (i < n) {
		printf("整数=");
		scanf("%d", &input);
		ans += input;
		printf("%d\n", input);
		i++;
	}
	printf("%d\n", ans);
	return (0);
}