#include<stdio.h>
int main(){
    system("cls");
    int l,b,r,s;
    printf("enter the radius = ");
    scanf("%d",&r);
    printf("area of circle = %.2f \nperimeter of circle = %.2f",3.14*r*r,2*3.14*r);
    printf("\nEnter the side = ");
    scanf("%d",&s);
    printf("area of square = %d \nperimeter of square = %d",s*s,4*s);
    printf("\nEnter the length and breadth = ");
    scanf("%d %d",&l,&b);
    printf("area of rectangle = %d \nperimeter of rectangle= %d",l*b,2*(l+b));
    return 0;
}