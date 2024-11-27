//program to subtract two matrices
#include<stdio.h>
#include<stdlib.h>

int main(){
    system("cls");
    int r,c;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d",&r,&c);
    int mat1[r][c],mat2[r][c],result[r][c];
    printf("Enter the elements of the first matrix:\n");
    for(int i=0;i<r;i++){
        for(int j= 0;j<c;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter the elements of the second matrix:\n");
    for(int i=0;i<r;i++){
        for(int j= 0;j<c;j++){
            scanf("%d",&mat2[i][j]);
        }
    }
    // matrix subtraction
    printf("difference of matrices is :\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            result[i][j]=mat1[i][j]-mat2[i][j];
            printf("%d ",result[i][j]);
            }
            printf("\n");
        }
        return 0;
}