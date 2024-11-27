//WAP using function to compute simple interest
#include <stdio.h>
#include<stdlib.h>
int sinterest(void);
int main(){
system("cls");
    int SI=sinterest();
    printf("Simple Interest  = %d",SI);
    return 0;
}

//funtion with no argument but return type
int sinterest(void){
    int P,R,T;
    printf("Enter Principle,Rate of interest and time : ");
    scanf("%d %d %d",&P,&R,&T);
    return (P*R*T)/100;
}