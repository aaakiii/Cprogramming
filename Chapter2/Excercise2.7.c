#include<stdio.h>

unsigned invert(unsigned x,int p,int n);

int main(void)
{
    printf("%u",(unsigned)invert((unsigned)10,(int)4,(int)5));
}

unsigned invert(unsigned x, int p, int n)
{
     return   x ^ (~(~0 << n) << (p + 1 - n));
}
