//WAP to read a 5 digit number from a user and perform sum of their digits
#include<stdio.h>
int main(){
    system("cls");
    int n,a,b,c,d,e;        // Declaration of variables.
    printf("Enter 5 digit number");
    scanf("%d",&n);
    a=n%10;         //(%)mod to get the value.
    n=n/10;         //(/) divide to remove the value.
    b=n%10;
    n=n/10;
    c=n%10;
    n=n/10;
    d=n%10;
    n=n/10;
    e=n%10;
    n=n/10;
    printf("Sum of the digits = %d ",a+b+c+d+e);     // Displaying the result
    return 0;
}