#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter any three numbers");
    scanf("%d %d %d",&a,&b,&c);

    if(a==b && b==c)
    printf("the given numbers are equal");
else
printf("the given numbers are not equal");
return 0;
}