#include<stdio.h>
#include<stdlib.h>
int main(){
    system("cls");
    int num1,num2,sum;
    printf("Enter First Number - ");
    scanf("%d",&num1);
    printf("Enter Second Number - ");
    scanf("%d",&num2);
    sum=num1+num2;
    printf("Addition = %d",sum);
    return 0;
}