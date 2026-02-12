#include<stdio.h>
int main(){
    int n,data;
    printf("ENter n,data:");
    scanf("%d %d",&n, &data);
    if((data)&(1<<n)==0)
    {
        printf("not set");
    }
    else{
        printf("set");
    }
}