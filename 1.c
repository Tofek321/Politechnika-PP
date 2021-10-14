#include <stdio.h>

int main()
{
    char c0 = 127;
    char c1 = 127;
    signed char c2 = 127;
    unsigned char c3 = 127;
    printf("%c,%c,%c,%c, \n", c0, c1, c2, c3);
    printf("%i,%i,%i,%i, \n", c0, c1, c2, c3);

    c0++;
    c1++;
    c2++;
    c3++;

    printf("%c,%c,%c,%c, \n", c0, c1, c2, c3);
    printf("%i,%i,%i,%i, \n", c0, c1, c2, c3);
    return 0;
}