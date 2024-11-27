//WAP to check given number is palindrome or not
#include<stdio.h>
int main(){
    system("cls");
    int n,rev=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    int tem = n;
    while (n!=0){
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(tem==rev)
        printf("Number is palindrome");
    else
        printf("Number is not palindrome");
    return 0;
}