#include <stdio.h>

int main(void)
{
	int i1, i2, i3;
	float ans;
	
	printf("数値1=");
	scanf("%d", &i1);
	
	printf("数値2=");
	scanf("%d", &i2);
	
	printf("数値3=");
	scanf("%d", &i3);
	
	ans = (i1 + i2 + i3) / 3.0;
	
	printf("平均=%.6f\n", ans);
	
	return (0);
}