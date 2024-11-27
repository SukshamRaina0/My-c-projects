//WAP a program to take input from user in array
#include<stdio.h>
int main(){
    system("cls");
    int marks[5];
    printf("Enter 5 Array's Elements");
    for(int i = 0;i<5;i++)
    {

        scanf("%d",&marks[i]);
    }
    printf("ARRAY=");
    for(int i = 0;i<5;i++)
        {
            printf("%d ",marks[i]);
        }
    return 0;
}