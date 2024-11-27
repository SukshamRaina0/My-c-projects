//To check to count total numbers of vovwel and consonants in string
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main(){
system("cls");
    char str[100];
    int vowel=0,cons=0;
    printf("Enter String : ");
    gets(str);
    for (int i = 0;i<strlen(str);i++){
        if (isalpha(str[i])) {
            strlwr(str);
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
                vowel++;
            }
            else
            {
                cons++;
            }
    }
    }
    printf("Total Vowel = %d\n",vowel);
    printf("Total Consonants=%d\n",cons);
    return 0;
}