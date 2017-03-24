#include <stdio.h>

int main(void) {
   

    int a[100],i,num,n,max;
    printf("enter number of elements to be entered");
    scanf("%d",&n);
    printf("enter numbers");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    num=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>num)
        {
        if(a[i]>max)
        {
            num=max;
            max=a[i];
            
        }
        if(a[i]<max)
            num=a[i];
        }
    }
    printf("second largest no. is %d",num);
	
	return 0;
}

