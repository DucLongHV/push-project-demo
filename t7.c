#include<stdio.h>
int main(){
    unsigned u,v,w,x = 0xab87,
    y = 0x4633, z = 0x1111;
    u = x^y;
    v = x^z;
    w = y^z;
    printf("u = %x\tv = %x\tw = %x\n",u,v,w);
    return 0;
}