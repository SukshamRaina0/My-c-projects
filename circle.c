#include<stdio.h>
#include<stdlib.h>
int main(){
    system("cls");
    float rad,area;
    printf("enter radius of circle - ");
    scanf("%f",&rad);
    area=3.14*rad*rad;
    printf("area of circle =%f",area);
    return 0;
}