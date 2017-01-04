#include <stdio.h>

int main() {
    int a[7][7],i,j;
    int n,max,k,x,y;
    printf("enter the size of magic square:");
    scanf("%d",&n);
    max=n*n;
    i=0;j=n/2;
    for (k=1; k<=max; ++k) 
    {
	    a[i][j] = k;
	    i=i-1;;
	    j=j+1;
	    if (k%n == 0) 
	    { 
            i=i+2; 
            j=j-1; 
	    }
	    else 
	    {
	        if(j==n)
	        {
	            j=j-n;
	        }
	        else if(i<0)
	        {
	            i=i+n;
	        }
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
