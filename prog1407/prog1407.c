#include <stdio.h>

int main(void)
{
	int i;
	
	printf("賛成者数=");
	scanf("%d", &i);
	
	if ((i >= 21) && (i <= 41)) {
		printf("多数決で可決しました。\n");
	}
	else {
		printf("否決しました\n");
	}
	return (0);
}