#include <stdio.h>

int main(void)
{
	int a;
	
	printf("数値(3桁)=");
	scanf("%d", &a);
	
	printf("1の位%d\n",a%10);
	printf("10の位%d\n",(a/10)%10);
	printf("100の位%d\n",a/100);
	
	return (0);
}