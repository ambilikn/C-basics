#include <stdio.h>

int main()
{
	int a=9,b=8;
	printf("The numbers are a = %d, b=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping a=%d, b=%d",a,b);
}
