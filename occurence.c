#include<stdio.h>
void main()
{
	int i,n,m,a[20],b[10];
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Input array:");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Input value :");
	scanf("%d",&m);
	for(i=0;i<=n;i++)
	{
		for(int j=0;j<10;j++)
		{
			if(a[i]==j)
			{
				b[j]++;
			}
		}
	}
	
	printf("the number %d occurs %d times",m,b[m]);			
	
}
