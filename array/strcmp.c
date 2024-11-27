#include<stdio.h>
#include<string.h>
void main()
{
     system("cls");
    char str1[20],str2[20];
    printf("Enter str1: ");
    gets(str1);
    printf("Enter str2: ");
    gets(str2);
    int x=strcmp(str1,str2);
    if(x==0)
    printf("same");
    else if(x==-1)
    printf("s1<s2");
    else
    printf("s1>s2");


}