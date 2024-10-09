#include<stdio.h>
int main(){
    system("cls");
    int a,b,c,d,e,total;
    printf("Enter marks of five subject: ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    total=a+b+c+d+e;
    printf("total marks = %d \n percentage = %.2f",total,total*0.2);
    return 0;
}