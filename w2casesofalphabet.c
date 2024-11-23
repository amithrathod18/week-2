#include <stdio.h>
int main(){
    char ch;
    printf("enter a character");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
    printf("the uppercase character");

else if(ch>='a' && ch<='z')
printf("the lowercase character");

else 
printf("the character is not uppercase nor lowercase");

return 0;

}