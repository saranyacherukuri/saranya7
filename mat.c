#include<stdio.h>
void main()
{
	int m,n,k,a[10][10];
	printf("enter the rows:");
	scanf("%d",&m);
	printf("enter the columns:");
	scanf("%d",&n);
	printf("enter the sum value:");
	scanf("%d",&k);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i+j==k)
			{
				a[i][j]=1;
			}
			else
				a[i][j]=0;
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
