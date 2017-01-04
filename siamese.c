#include <stdio.h>

int main() {
    int a[7][7],i,j;
    int n,max,k,x,y;
    printf("enter the size of magic square:");
    scanf("%d",&n);
    max=n*n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            a[i][j]=0;
        }
    }
    i=0;j=n/2;
    for(k=1;k<=max;k++)
    {
        if(a[i][j]==0)
        {
            a[i][j]=k;
            i=i-1;
            j=j+1;
            
        }
        else
        {
           i=i+1;
           a[i][j]=k;
          
        }
        if(i<0)
        {
            i=n-1;
        }
        if(j==n)
        {
            j=1;
                
        }
        
        
    }
        
        
        
    for(x=0;x<n;x++)
    {
        for(y=0;y<n;y++)
        {
            printf("%d\t",a[x][y]);
        }
        printf("\n");
    }
	
	return 0;
}
	
