#include<stdio.h>
int main(){
    unsigned x,y =0xffab87;
    x = ~y;
    printf("x = %x \ty = %x\n %x",x,y,x+y);
    return 0;
}