//WAP to read a 5 digit number from a user and perform sum of their digits
#include<stdio.h>
int main(){
    system("cls");
    int n,sum=0;        // Declaration of variables.
    printf("Enter 5 digit number: ");
    scanf("%d",&n);
    sum+=n%10;         //(%)mod to get the value.
    n=n/10;            //(/) divide to remove the value.
    sum+=n%10;
    n=n/10;
    sum+=n%10;
    n=n/10;
    sum+=n%10;
    n=n/10;
    sum+=n%10;
    n=n/10;
    printf("Sum of the digits in = %d ",sum);     // Displaying the result
    return 0;
}