/*WAP to print the following pattern
        *****
         ****
          ***
           ** */
#include<stdio.h>
#include<stdlib.h>
int main(){
    system("cls");
    int n;
    printf("ENTER NUMBER OF ROWS : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf(" ");
        }
        for(int k=0;k<=n-i;k++)
        {
            printf("* ");
        }

        printf("\n");
    }
    return 0;
}
