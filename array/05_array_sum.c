//WAP a program find sum of all the elements in array
#include<stdio.h>
int main(){
    system("cls");
    int n,sum=0;
    printf("Enter Array Size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter  Array's Elements: ");
    for(int i = 0;i<n;i++)
    {

        scanf("%d",&arr[i]);
    }
    printf("ARRAY=");
    for(int i = 0;i<n;i++)
        {
            printf("%d ",arr[i]);
            sum+=arr[i];

        }
        printf("\nsum=  %d",sum);

    return 0;
}