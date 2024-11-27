#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("Enter number you want to print number upto ");
    scanf("%d",&n);
    for( int i = 1; i <= n; i++)
    {
        printf("%d ",i);
    }
    
    return 0;
}