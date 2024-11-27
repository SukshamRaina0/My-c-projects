//Wap to check a string is palindrome or not
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
system("cls");
     char str1[100];
     char str2[100];
   
    printf("Enter the string : ");
    gets(str1);
    strcpy(str2,str1);
    strrev(str1);
    int strcmp(str1,str2);
    if (strcmp(str1,str2)==0)
    printf("The string is palindrome");
    else
    printf("The string is not palindrome");
    return 0;
}