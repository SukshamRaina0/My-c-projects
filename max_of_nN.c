#include <stdio.h>
#include <limits.h>
int main(){
    system("cls");
    int n,max = INT_MIN,num;
    printf("Enter total numbers : ");
    scanf("%d",&n);
     printf("Enter numbers : ");
    for(int i = 1;i<=n;i++)
    {
        scanf("%d",&num);
        if(num>=max)
        {
            max=num;
        }
    }
    printf("Max = %d",max);
    return 0;
}