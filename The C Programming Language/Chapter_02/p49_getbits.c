#include <stdio.h>
unsigned getbits(unsigned x, int p, int n);
int main()
{
    unsigned x = 20;
    unsigned i;
    printf("%d = 0x%x\n", x, x);
    i = getbits(20, 4, 3);
    printf("%d\n", i);

    printf("~0 = 0x%x\n", ~0);
    printf("(~0<<4) = 0x%x\n", ~0<<4);
    printf("~(~0<<4) = 0x%x\n", ~(~0<<4));

    return 0;
}

unsigned getbits(unsigned x, int p, int n)
{
    return (x >> (p+1-n)) & ~( ~0 << n);
}
