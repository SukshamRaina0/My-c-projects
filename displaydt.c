#include<stdio.h>
#include<stdlib.h>
int main(){
    system("cls");
    int numi;
    float numf;
    double numd;
    char numc;
    printf("Enter character - ");
    scanf("%c",&numc);
    printf("Enter integer value - ");
    scanf("%d",&numi);
    printf("Enter float value - ");
    scanf("%f",&numf);
    printf("Enter double value - ");
    scanf("%lf",&numd);
    printf("\n");
    printf("integer no. = %d\n",numi);
    printf("float no. = %f\n",numf);
    printf("double no. = %lf\n",numd);
    printf("character = %c\n",numc);
    return 0;
}