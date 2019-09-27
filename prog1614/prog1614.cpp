#include <stdio.h>

int main(void)
{
	int seireki;
	
	printf("西暦=");
	scanf("%d", &seireki);
	
	if (seireki % 4 == 0) {
		if (seireki % 100 == 0) {
			if (seireki % 400 == 0) {
				printf("ことしはうるう年です\n");
				return (0);
			}
			printf("ことしはうるう年ではありません\n");
			return (0);
		}
		printf("ことしはうるう年です\n");
	}
	return (0);
}