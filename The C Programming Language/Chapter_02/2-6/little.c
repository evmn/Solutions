#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);

int main()
{
    unsigned x = 0xabcdef;
    unsigned y = 0x54321;
    int p = 20;
    int n = 8;
    unsigned i;

    i = setbits(x, p, n, y);
    printf("x=0x%x\ny=0x%x\np=%d\nn=%d\n\n\ti = 0x%x\n", x, y, p, n, i);
    return 0;
}


unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    return (x & (~(~0 << n) << (p-n) ^ ~0))|((y & ~(~0 << n)) << (p-n));
}
