#include<stdio.h>
int main(){
   int n,count=0;
   printf("enter:");
   scanf("%d",&n);
   if(n>0){
    n=n%10;
   }
   count=count+n;
   printf("%d",count);
}