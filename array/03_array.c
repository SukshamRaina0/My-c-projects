//WAP a program to take input array size and elements from user in array
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
    for(int i = 0;i<n;i++)
        {
            printf("%d ",marks[i]);
        }
    return 0;
}