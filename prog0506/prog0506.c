#include <stdio.h>

int main(void)
{
	float teihen = 2.3;
	float takasa = 1.5;
	float menseki = (teihen * takasa) / 2;
	
	printf("底辺%fで高さは%fの三角形の面積は%fです\n", teihen, takasa, menseki);
	
	return (0);
}