#include <stdio.h>

int main()
{
	int num;
	printf("Enter number between 1 and 5\n");
	scanf("%d",&num);
	switch(num)
	{
		case 1:
			printf("Food item :Pizza\n Price: Rs239");
			break;
		case 2:
			printf("Food item :Burger\n Price: Rs 129");
			break;
		case 3:
			printf("Food item :Pasta\n Price: Rs 179");
			break;
		case 4:
			printf("Food item :French Fries\n Price: Rs 99");
			break;
		case 5:
			printf("Food item :Sandwich\n Price: Rs 149");
	}
	
}
