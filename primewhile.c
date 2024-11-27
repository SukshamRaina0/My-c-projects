//WAP a number to check that a number is prime or not using while loop
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n, i = 2, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (i<=n/2)
    {
        if (n % i == 0){
            flag = 1;
            break;
        }
        i++;
    }
    if(flag==0)
    printf("Number is prime");
    else
    printf("Number is not prime");
    
    return 0;
}