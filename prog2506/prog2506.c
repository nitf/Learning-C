#include <stdio.h>

int main(void)
{
	int region;
	
	printf("西原：1  北中城：2  沖縄南：3  沖縄北：4\n");
	printf("石川：5  屋嘉  ：6  金武  ：7  宜野座：8  許田：9\n");
	
	printf("利用区間=");
	scanf("%d", &region);
	
	switch (region) {
	  case 1:
		printf("料金は%d円です\n", 200);
		break;
			
	  case 2:
		printf("料金は%d円です\n", 300);
		break;
			
		case 3:
			printf("料金は%d円です\n", 400);
			break;
			
		case 4:
			printf("料金は%d円です\n", 500);
			break;
			
		case 5:
			printf("料金は%d円です\n", 600);
			break;
			
		case 6:
			printf("料金は%d円です\n", 700);
			break;
			
		case 7:
			printf("料金は%d円です\n", 750);
			break;
			
		case 8:
			printf("料金は%d円です\n", 850);
			break;
			
		case 9:
			printf("料金は%d円です\n", 1000);
			break;
			
		default:
			printf("利用区間が間違っています\n");
			break;
	}
	
	return (0);
}