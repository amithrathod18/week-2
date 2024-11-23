#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter sides of triangle");
    scanf("%d %d %d",&a,&b,&c);
    
    if(a==b &&  b==c)
    printf("equilateral triangle");

    else if((a==b && b!=c) || (a==c && b!=c) || (b==c && c!=a))
    printf("isoceles triangle");

    else
  printf("scalene triangle");
return 0;
}