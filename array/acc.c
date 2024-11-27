#include <stdio.h>
#include<string.h>
void main()
{
    char str[30];
    printf("Enter string : ");
    gets(str);
    for (int i = 0;i<strlen(str);i++){
        printf("%c ",str[i]);
    }
}