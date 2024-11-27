//WAP a program count number of even and odd  numbers in a array
#include<stdio.h>
int main(){
    system("cls");
    int n,even=0,odd=0;
    printf("Enter Array Size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter  Array's Elements: ");
    for(int i = 0;i<n;i++)
    {

        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        even++;
        else
        odd++;
    }
    printf("Number of even elements are = %d\n",even);
    printf("Number of odd elements are = %d\n",odd);

    return 0;
}