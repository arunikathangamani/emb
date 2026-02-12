#include<stdio.h>
void main(){
    int a=511,b;
    char *cp;
    cp= &a;
    b=*cp;
    *cp=10;
    printf("%d %d %d",a,b,*cp);
}