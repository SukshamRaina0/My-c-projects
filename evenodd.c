#include<stdio.h>
int main(){
    system("cls");
    int num;
    printf(" Enter the number: ");
    scanf("%d",&num);
    if(num%2==0)
    printf("The Number is Even");
    else
    printf("The Number is Odd");
    return 0;
}