//WAP to find total number of alphabet,digit or special character
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    system("cls");
    char str[50];
    int alpha = 0,num = 0,spec= 0;
    printf("Enter string : ");
    gets(str);
    for (int i = 0;i<strlen(str);i++){
       strlwr(str);
       if(str[i] >= 'A' && str[i]<='Z')
       alpha++;
       else if(str[i]>=1 && str[i<=9])
       num++;
       else
       spec++;
    }
    printf("Total number of alphabets in string are : %d\n",alpha);
    printf("Total number of number in string are : %d\n",num);
    printf("Total number of special character in string are : %d\n",spec);
}