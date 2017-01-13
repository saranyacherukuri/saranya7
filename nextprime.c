#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,n,num=0;
    int a[1000];
    printf("Enter the number:\n");
    scanf("%d",&n);
    
    for(i=0;i<2*n;i++)
    {
        a[i]=i+2;
    }
    for(i=2;i<2*n;i++)
    {
        
        
            if(a[i]>n)
            {
                num=a[i];
                break;
            }
            for(j=a[i]*2;j<2*n;j=j+a[i])
            {
                a[j]=-1;
            }
                
        }
    printf("The next prime number is: %d",num);
    
    return 0;
}
