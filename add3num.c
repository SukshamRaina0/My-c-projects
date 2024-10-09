#include<stdio.h>
#include<stdlib.h>
int main(){
    system("cls");
    int num1,num2,num3,sum;
    printf("Enter first number - ");
    scanf("%d",&num1);
    printf("Enter second number - ");
    scanf("%d",&num2);
    printf("Enter third number - ");
    scanf("%d",&num3);
    sum=num1+num2+num3;
    printf("Sum of three number is = %d",sum);   
    return 0;
}