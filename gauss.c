#include <stdio.h>

int main(void) {
    int size,i,j,k,det=1;
    printf("enter the no of rows and columns:");
    scanf("%d",&size);
    int a[size][size];
    printf("enter the elments of matrix:");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(k=0;k<size;k++)
    {
        for(i=0;i<size-1;i++)
        {
            for(j=0;j<size;j++)
            {
                a[i+1][j]=((a[0][0]*a[i+1][j])-(a[i][j]*a[i+1][0]));
                
            }
        }
    }
    
    for(i=0;i<size;i++)
    {
        det=det*a[i][i];
    }
    printf("determinant=%d",det);
    
	
	return 0;
}

