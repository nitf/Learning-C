#include <stdio.h>

int main(void)
{
	int i, j, m;

	m = 0;
	scanf("%d", &i);
	
	while (m < ((i - 1) - 2)) {
		if (i % (m + 2) == 0) {
			printf("%dは素数ではない\n", i);
			return (0);
		}
		m++;
	}
	printf("%dは素数\n", i);
	return (0);
}