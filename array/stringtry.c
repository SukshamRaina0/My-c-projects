#include<stdio.h>
#include<string.h>

int main(){
    system("cls");
    char name[30];
    char name2[30];
    printf("Enter the value of S1 :");
    gets(name);
    strcpy(name2,name);
    printf("%s",name2);
    return 0;
}