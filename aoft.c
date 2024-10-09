#include<stdio.h>
#include<stdlib.h>
int main(){
    system("cls");
    float b,h,area;
    printf("enter base- ");
    scanf("%f",&b);
    printf("enter height- ");
    scanf("%f",&h);
    area=0.5*b*h;
    printf("area of triangle = %f",area );
    return 0;
}