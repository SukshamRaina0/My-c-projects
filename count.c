#include<stdio.h>
#include<math.h>
int main(){
    system("cls");
    int num,count=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    int tem = num;
    while(tem!=0)
    {
    tem/=10;
    count++;
    }
    printf("Number of digits in the number %d is %d",num,count);
    return 0;
}