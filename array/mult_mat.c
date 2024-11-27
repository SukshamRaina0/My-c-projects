//program to add two matrices
#include<stdio.h>
#include<stdlib.h>

int main(){
    system("cls");
    int r1,c1;
    printf("Enter the number of rows and columns of the matrix 1 : ");
    scanf("%d %d",&r1,&c1);
    int mat1[r1][c1];
    printf("Enter the elements of the first matrix:\n");
    for(int i=0;i<r1;i++){
        for(int j= 0;j<c1;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    int r2,c2;
    printf("Enter the number of rows and columns of the matrix2: ");
    scanf("%d %d",&r2,&c2);
    int mat2[r2][c2];
    printf("Enter the elements of the second matrix:\n");
    for(int i=0;i<r2;i++){
        for(int j= 0;j<c2;j++){
            scanf("%d",&mat2[i][j]);
        }
    }
    //logic for multiplication
    for(int i = 0;i<r1;i++)
    {
        for(int j = 0;j<c2;j++)
        {
            int sum = 0;
            for(int k =0;k<c2;k++)
            {
                sum+=mat1[i][k]*mat2[k][j];
            }
            printf("%d ",sum);
        }
        printf("\n");
    }
    
        return 0;
}