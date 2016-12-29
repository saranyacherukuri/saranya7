#include <stdio.h>

int main() {
    int a[50],j;
    int n,i,d,size=0,temp;
    printf("enter the number:");
    scanf("%d",&n);

    for(i=0;n!=0;i++)
    {
        d=n%10;
        a[i]=d;
        n=n/10;
        size++;
    }
    
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<size;i++)
    {
        printf("%d",a[i]);
    }

	return 0;
}
