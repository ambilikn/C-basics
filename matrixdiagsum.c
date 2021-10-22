#include <stdio.h>

main()
{
	int a[4][4],i,j,sum=0;
	printf("Input elements in the matrix");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{
			printf("\nelement[%d][%d]: ",i,j);
			//scanf("%d",&a[i][j]);
			scanf("%d",(*(a+i)+j));
			if(i==j)
				sum=sum+a[i][j];
	}
	printf("\nSum is %d",sum);
}
