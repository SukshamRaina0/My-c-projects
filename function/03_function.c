//Write a program to find the cube of a number using function
#include <stdio.h>
#include<stdlib.h>
void cube1(void);
int cube2(void);
void cube3(int);
int cube4(int);


//main function
int main(){
system("cls");
printf("Function with no return type no arguments");
    cube1();
    printf("\n");

    printf("Function with return type but no arguments\n");
    printf("cube 2 =%d\n",cube2());

    printf("Function with arguments but no return type\n");
    int num1;
    printf("Enter a number :\n");
    scanf("%d",&num1);
    cube3(num1);

    printf("Function with both arguments and return type\n");
     printf("Enter a number :\n");
    scanf("%d",&num1);
    cube4(num1);
    printf("Cube 4 = %d\n",cube4(num1));
    
    return 0;
}

// User defined functions 

//Function with no return type no arguments
void cube1(void){
    int num1,cube;
    printf("Enter a number: ");
    scanf("%d",&num1);
    cube=num1*num1*num1;
    printf("cube = %d",cube);
}

//Function with return type but no arguments
int cube2(void){
    int num1,cube;
    printf("Enter a number: ");
    scanf("%d",&num1);
    cube=num1*num1*num1;
    return cube;
}
//Function with arguments but no return type
void cube3(int a){
    int cube;
    cube=a*a*a;
    printf("Cube 3 = %d\n",cube);
}
//Function with both arguments and return type
int cube4(int a){
    int cube=a*a*a;
    return cube;
}
