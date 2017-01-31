#include <stdio.h>
void prin(char a[4][4]);
int main() {
    char a[4][4];
    int n=0,i,j,temp,r=3,c=2;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%c",&a[i][j]);
        }
    }
    prin(a);
    while(n==0)
    {
        printf("press: \n u-->up \t d-->down \t r-->right \t l-->left q-->quit \n");
        scanf("%d",&n);
        switch (n)
        {
        case 'u':
        	    temp=a[r][c];
    			a[r][c]=a[r-1][c];
    			a[r-1][c]=temp;
    			r--;
    			prin(a);
        	    break;
        case 'd':
        	    temp=a[r][c];
    			a[r][c]=a[r+1][c];
    			a[r+1][c]=temp;
    			r++;
    			prin(a);
        	    break;
        case 'r':
                temp=a[r][c];
    			a[r][c]=a[r][c+1];
    			a[r][c+1]=temp;
    			c++;
    			prin(a);
    			break;
        case 'l':
        	  	temp=a[r][c];
    			a[r][c]=a[r][c-1];
    			a[r][c-1]=temp;
    			c--;
    			prin(a);
        	    break;
        case 'q':
                n=1;
        	    break;
        }
    }
    return 0;
}
void prin(char a[4][4])
{
    int i,j;
    for(i=0;i<4;i++)
    {
        printf("\n");
        for(j=0;j<4;j++)
        {
            printf("\t%c",a[i][j]);
        }
    }
}
