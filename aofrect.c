#include<stdio.h>
#include<stdlib.h>
int main(){
    system("cls");
    float l,b,area;
    printf("enter the length");
    scanf("%f",&l);
    printf("enter the breadth");
    scanf("%f",&b);
    area =l*b;
    printf("area of rectangle= %f",area);
    return 0;
}