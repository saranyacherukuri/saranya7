#include <stdio.h>

int main() {
    int a[200],n,i,k;
    printf("enter the input number");
    scanf("%d",&n);
    for(i=1;i<=n+50;i++)
    {
        a[i]=i;
    }
    a[1]=0;
    for(i=1;(i*i)<=n+50;i++)
    {
        if(a[i]!=0)
        {
            for(k=2*i;k<=n+50;k=k+i)
            {
                if(a[k]!=0)
                {
                    a[k]=0;
                }
            }
        }
    }
    for(i=1;i<=n+50;i++)
    {
        if(a[i]>n)
        {
            printf("\t%d",a[i]);
            break;
        }
    }
	return 0;
}
