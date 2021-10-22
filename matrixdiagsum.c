#include <stdio.h>

main()
{
	int a[4][4],i,j,sum=0;
	printf("Enter numbers of matrix");
	for(i=0;i<4;i++)
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
			if(i==j)
				sum=sum+a[i][j];
	}
	printf("\nSum is %d",sum);
}
