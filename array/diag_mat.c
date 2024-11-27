//WAP to print the sum of diagonal in a 2d array or matrix
#include<stdio.h>
#include<stdlib.h>
int main(){
    system("cls");
    int rsize,csize,sum=0,sum1=0;
    printf("Enter the size of row and column");
    scanf("%d %d",&rsize,&csize);
    int arr[rsize][csize];
    printf("Enter elements\n");
    for(int i = 0;i<rsize;i++){
        for(int j = 0;j<csize;j++){
            scanf("%d",&arr[i][j]);
            
        }
    }
    printf("The sum of major diagonal is : ");
    for(int i =0,j=csize-1;i<rsize && j>=0;i++,j--){
        sum=sum + arr[i][i];
        sum1=sum1+arr[i][j];
    }
    printf("Sum of major diogonal is : %d\n",sum);
    printf("Sum of minor diagonal is : %d",sum1);
    return 0;
}