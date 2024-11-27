#include <stdio.h>
int main() {
    system("cls");
    
    int n;
    scanf("%d",&n);
    
    if(n%12==1){
        printf("WS %d",n+11);
    }else if(n%12==2){
        printf("MS %d",n+9);
    }else if(n%12==3){
        printf("AS %d",n+7);
    }else if(n%12==4){
        printf("AS %d",n+5);
    }else if(n%12==5){
        printf("MS %d",n+3);
    }else if(n%12==6){
        printf("WS %d",n+1);
    }else if(n%12==7){
        printf("WS %d",n-1);
    }else if(n%12==8){
        printf("MS %d",n-3);
    }else if(n%12==9){
        printf("AS %d",n-5);
    }else if(n%12==10){
        printf("AS %d",n-7);
    }else if(n%12==11){
        printf("MS %d",n-9);
    }else if(n%12==0){
        printf("WS %d",n-11);}
    return 0;
}