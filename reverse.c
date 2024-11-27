#include<stdio.h>
int main(){
    system("cls");
    int rev=0,n;
    printf("enter the number ");
    scanf("%d",&n);
    while (n!=0)
    {
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("Reverse = %d",rev);
    return 0;
}                                                                                                         