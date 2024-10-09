#include<stdio.h>
#include<math.h>
int main(){
    system("cls");
    float x1,x2,y1,y2,dist;
    printf("Enter the coordinates of 1st point");
    scanf("%f %f",&x1,&y1);
    printf("Enter the coordinates of 2nd point");
    scanf("%f %f",&x2,&y2);
    dist=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("The Euclid distance distance is = %.2f\n",dist);
    return 0;


}
