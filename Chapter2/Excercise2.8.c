#include<stdio.h>
unsigned rightrot(unsigned x,int n);

int main(void)
{
    printf("%u",(unsigned)rightrot((unsigned)6,(int)1));

    return 0;
}

unsigned rightrot(unsigned x,int n)
{
    int wordlength(void);
    unsigned rbit;
    
    rbit = x << (wordlength() - n);
    x = x >> n;
    x = x | rbit;
    
    return x;
}

int wordlength(void)
{
    int i;
    unsigned v = (unsigned) ~0;

    for(i=1;(v=v>>1)>0;i++)
        ;
    return i;
}

