#include<stdio.h>
int main()
{
	int n,d,r=0,i,temp;
	printf("enter the number:");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		d=n%10;
		n=n/10;
		r=r*10+d;
		
	}
	if(r==temp)
	{
		printf("number is a palindrome");
	}
	else
	{
		printf("number is not a palindrome");
	}
	return 0;
}
