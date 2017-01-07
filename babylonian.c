#include <stdio.h>

int main(void) {
    int num,i;
    float b,avg,guess;
	printf("enter the number to find square root");
	scanf("%d",&num);
	/*for(i=1;i<100;i++)
	{
	    
	    if(num>i*i)
	    {
	        guess=i-1;
	        break;
	    }
	}*/
	printf("enter the guess number");
	scanf("%d",&guess);
	while(num!=(avg*avg))
	{
    	b=num/guess;
    	avg=((guess+b)/2);
    	guess=avg;
	}
	printf("%f",guess);
	return 0;
}

