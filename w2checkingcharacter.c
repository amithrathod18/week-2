#include<stdio.h>
int main(){
    char ch;
    printf("enter a character");
    scanf("%c",ch);

    if ((ch>='A' && ch<='Z') || (ch>='a' || ch<='z') ){
        printf("the character is %c is alphabet");
    }

    else if(ch>='0' && ch<='9'){
        printf("the character %c is digit")
    }
    else {
    printf("the character %c is special character");
    }
return 0;
}