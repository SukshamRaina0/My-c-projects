#include<stdio.h>
#include<stdlib.h>
int main(){
    system("cls");
    int a,b;
    printf("enter the value");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the values are = %d %d",a,b);
    return 0;
}