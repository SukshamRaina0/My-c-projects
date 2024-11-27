// WAP to print the area of circle square and rectangle on the basis of user choice
#include<stdio.h>
int main(){
    system("cls");
    int choice,l,b,rad;
    printf("To find area of shape\n1 Circle\n2 square\n3 rectangle\nEnter your choice as number ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("enter the radius : " );
        scanf("%d",&rad);
        printf("the area of circle = %.2f",3.141*rad*rad);
        break;
        case 2:
        printf("enter the side : " );
        scanf("%d",&l);
        printf("the area of circle = %d",l*l);
        break;
        case 3:
        printf("enter the length and breadth :");
        scanf("%d %d",&l,&b);
        printf("the area of circle = %d",l*b);
        break;
        default:
        printf("invalid choice");
    }

    return 0;
}