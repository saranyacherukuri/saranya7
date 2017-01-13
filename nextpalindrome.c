#include <stdio.h>
#include<stdlib.h>
int main() {
    int n,i,reverse=0;
    int temp;
    printf("enter the input number:");
    scanf("%d",&n);
    for(i=n;i<n*n;i++)
    {
        temp = n;
 
        while (temp != 0)
        {
           reverse = reverse * 10;
           reverse = reverse + temp%10;
           temp    = temp/10;
        }
        if(reverse==n)
        {
            break;
            
        }
    }
    
	return reverse;
}

