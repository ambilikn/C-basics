#include <stdio.h>
int fibonacci(int);

int main()
{
	int i,l;
	printf("\nEnter the number:");
	scanf("%d",&i);
	printf("\nThe fibonacci series is \n");
	for(l=0;l<=i;l++)
		printf(" %d ",fibonacci(l));
}

int fibonacci(int i)
{
	if(i<=1)
		return i;
	return(fibonacci(i-1)+fibonacci(i-2));
}
