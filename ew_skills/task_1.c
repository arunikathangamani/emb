#include<stdio.h>
int main(){
    int reg;
    int bit;
    char mode;
    scanf("%d %d %c",&reg,&bit,&mode);
    if(reg>=0 && reg<=255){
        if(bit>=0 && bit<=7){
            if(mode=='0'){
                reg&=~(1<<bit);
            }
            else{
                reg|=(1<<bit);
            }
        }
    }
    printf("%d",reg);
    return 0;
}

