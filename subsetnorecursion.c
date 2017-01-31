#include <stdio.h>
int main() {
    int a[3]={1,2,3};
    int i,j,n=3,k=0;
    for(i=0;i<n;i++)
    {
        
        printf("%d\n",a[i]);
        for(j=i+1;j<n;j++)
        {
            printf("%d,%d\n",a[i],a[j]);
         
        }
        
    }
    for(i=0;i<n;i++)
    {
        printf("%d,",a[i]);
    }
	
	return 0;
}
