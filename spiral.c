#include <stdio.h>

int main(void) {
    int i,j=0,n,m;
    //printf("enter the number of rows");
    scanf("%d",&n);
    m=n;
    for(i=0;i<m;i++)
    {
        
        if(i%2==0||i==2)
        {
            while(j<n)
            {
                printf("%d\t",j+1);
                j++;
                
            }
        }
        else
        {
            while(j>n)
            {
                printf("%d\t",j);
                j--;
                
            }
            n=n+(2*m);
        }
            
       printf("\n"); 
       j=j+m;
       
    }
    return 0;
}

