//WAP a program find largest of all the elements in array
#include<stdio.h>
#include<limits.h>
int main(){
    system("cls");
    int n,max=0;
    printf("Enter Array Size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter  Array's Elements: ");
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("%d",max);

    return 0;
}