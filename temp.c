#include<stdio.h>
int main(){
    system("cls");
    float cel,fah;
    printf("Enter the temperature in fahrenheit = ");
    scanf("%f",&fah);
    cel=(fah-32)*0.55555;
    printf("temperature in celcius = %.2f",cel);
    return 0;
}