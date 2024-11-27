/*WAP to print the following pattern
        *
        **
        ***
        **** */
#include<stdio.h>
#include<stdlib.h>
int main(){
 system("cls");
    int n;
    printf("ENTER NUMBER OF ROWS : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
