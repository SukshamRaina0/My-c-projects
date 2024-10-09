// WAP to find greatest number among Two using ternary operators
#include<stdio.h>
#include<stdlib.h>
int main(){
    system("cls");
    int a,b;
    printf("Enter the two numbers ");
    scanf("%d%d",&a,&b);
    (a>b)?printf("a is greatest"):printf("b is greatest");
    return 0;
}