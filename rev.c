#include <stdio.h>

int main() {
    int sum=0,n,d,count=0;
    printf("enter the number");
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        count++;
        sum=sum+d;
       
       
    }
    printf("number of digits are:%d",count);
    printf("sum of digits is:%d",sum);

    return 0;
}
