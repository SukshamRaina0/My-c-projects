//WAP to togle case of each character of string
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    system("cls");
    char str[30];
    printf("Enter string : ");
    gets(str);
    for (int i = 0;i<strlen(str);i++){
        if(str[i] >= 'A' && str[i]<='Z'){
            str[i]+=32;
        }
        else if(str[i] >= 'a' && str[i]<='z'){
            str[i]-=32;
        }
    }
    printf("Toggle Case = %s",str);
}