#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    int sum = 0;
    while(n != 0)
    {
        sum += n%10;
        n = n/10;
    }
    printf("sum of digits is %d",sum);
    return 0;
}