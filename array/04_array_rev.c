//WAP a program to display the elements of an array in reverse order
#include<stdio.h>
int main(){
    system("cls");
    int n;
    printf("Enter Array Size: ");
    scanf("%d",&n);
    int marks[n];
    printf("Enter  Array's Elements: ");
    for(int i = 0;i<n;i++)
    {

        scanf("%d",&marks[i]);
    }
    printf("ARRAY=");
    for(int i = n-1;i>=0;i--)
        {
            printf("%d ",marks[i]);
        }
    return 0;
}