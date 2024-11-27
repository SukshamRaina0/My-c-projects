#include<stdio.h>
#include<string.h>
int main()
{
    //Example of strlen(),strcpy(),strupr(),syrlwr()
    system("cls");
    char password[20],password2[20],password3[20];
    printf("Enter Password: ");
    gets(password);
    strcpy(password2,password);
    strcpy(password3,password);
    int len=strlen(password);
    strupr(password);
    strlwr(password2);
    strrev(password3);
    printf("Number of character in password string is %d\n",len);
    printf("password in Uppercase %s\n",password);
    printf("password in lowercase %s\n",password2);
    printf("password in reverse %s\n",password3);
    return 0;
}