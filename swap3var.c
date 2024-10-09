#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b,c;
    printf("enter first value");
    scanf("%d",&a);
    printf("enter second value");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("the values are = %d %d",a,b);
    return 0;
}