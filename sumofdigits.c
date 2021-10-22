#include <stdio.h>

int main()
{
	int num,sum,rem=0;
	printf("Enter number\n");
	scanf("%d",&num);
	while(num != 0)
	{
		rem = num%10;
		sum = sum + rem;
		num = num/10;
	}
	printf("\n Sum = %d",sum);
}
