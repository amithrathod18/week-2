#include<stdio.h>
int main(){
    int n;
    printf("enter year ");
    scanf("%d"&n);

    if (n%4==0 && n%100!=0 || n%400)
    printf("year is leap year");

    else 
    printf("not a leap year");
return 0;

}