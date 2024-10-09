//WAP to check number is even odd using ternary
#include<stdio.h>
#include<stdlib.h>
int main(){
    system("cls");
    int n;
    printf("Enter number ");
    scanf("%d",&n);
    (n%2==0)? printf("EVEN"):printf("odd");
    return 0;
}