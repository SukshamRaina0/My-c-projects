//Wap to perform sum of ist and last digit of any number
// #include<stdio.h>
// #include<math.h>
// int main(){
//     system("cls");
//     int num,last,first;
//     printf("enter number: ");
//     scanf("%d",&num);
//     int digits = (int)log10(num);//to find number of digit - 1
//     last=num%10;                  //to find last digit
//     first=num/(int)pow(10,digits);//to find first digit
//     printf("Last digit of number= %d\nFirst digit of number = %d\nSum of their digits %d",last,first,last+first);
//     return 0;
// }

//WAP to swap ist and 2nd digit
// #include<stdio.h>
// #include <math.h>
// #include<stdlib.h>
// int main(){
//     system("cls");
//     int num,first,last,count,rm;
//     printf("enter number: ");
//     scanf("%d",&num);

//     last=num%10;
//     num=num/10;

//     count=(int)log10(num);
//     first=num/(int)pow(10,count);
//     rm= num%(int)pow(10,count);

//     num=last*pow(10,count+1)+rm*10+first;
//     printf("swapped number is %d",num);//answer mei last digit mei -1 less than real answer hoga because of compiler error
//     return 0;
//}
//Wap to swap ist and second digit with loop to find power
// #include<stdio.h>
// #include <math.h>
// #include<stdlib.h>
// int main(){
//     system("cls");
//     int num,first,last,count,rm;
//     printf("enter number: ");
//     scanf("%d",&num);

//     last=num%10;
//     num=num/10;

//     count=(int)log10(num);
//     int p=1;
//     for(int i=1;i<=count;i++)
//     {p=p*10;}
//     first=num/p;
//     rm= num%p;

//     num=last*p*10+rm*10+first;
//     printf("swapped number is %d",num);
//     return 0;
// }