#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter three numbers");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b && a>c)
    printf("%d is biggest number",a); 
    
    else if (b>c && c>a)
    printf("%d is biggest number",b);

    else 
    printf("%d is biggest number",c);
return 0;
}
