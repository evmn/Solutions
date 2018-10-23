#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);

int main()
{
    unsigned x = 0xabcdef;
    unsigned y = 0x54321;
    int p = 20;
    int n = 8;
    unsigned i;

    printf("x = 0x%x\n",x);
    printf("p = %d\n",p);
    printf("n = %d\n",n);
    printf("y = 0x%x\n\n",y);

    i = setbits(x, p, n, y);
    printf("\ti = 0x%x\n",i);

    return 0;
}


unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    printf("~(~0 << n) = 0x%x\n", ~(~0 <<n));
    printf("y & ~(~0 << n) = 0x%x\n",y & ~(~0 <<n));

    y = (y & ~(~0 << n)) << (p-n);
    printf("\n\ty & ~(~0 << n) << (p-n) = 0x%x\n\n", y);
  
    printf("~(~0 << n)<< (p-n) ^ ~0 = 0x%x\n", ~(~0 << n) << (p-n) ^ ~0);

    x = x & (~(~0 << n) << (p-n) ^ ~0);

    printf("\n\tx & (~(~0 << n)<<(p-n) | 0) = 0x%x\n\n", x);

    return y | x;
}
