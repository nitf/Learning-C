#include <stdio.h>

int main(void)
{
	int suuji;
	int hitoketa;
	
	suuji = 283;
	hitoketa = suuji % 10;
	printf("%dの1桁目の数字は%dです\n", suuji, hitoketa);
	
	return (0);
}