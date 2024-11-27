//WAP a program copy data from one array to another array
#include<stdio.h>
#include<stdlib.h>
int main(){
    system("cls");
    int n;
    printf("Enter Array Size: ");
    scanf("%d",&n);
    int arr[n],arr1[n];
    
    printf("Enter  Array's Elements: ");
    for(int i = 0;i<n;i++)
    {

        scanf("%d",&arr[i]);
    }

    for(int i = 0;i<n;i++)
        arr1[i]=arr[i];

    printf("ARRAY 1 =");
    for(int i = 0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }
        printf("ARRAY 2 =");
    for(int i = 0;i<n;i++)
        {
            printf("%d ",arr1[i]);
        }
    return 0;
}