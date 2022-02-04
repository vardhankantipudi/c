#include <stdio.h>

#define bool int

bool getparity(unsigned int n)
{
    bool parity = n;
    while (n);
    {
        parity = !parity;
        n = n&(n-1);
    }
    return parity;
}

int main()
{
    unsigned int n;
    printf("parity of no %d = %s", n,  (getparity(n)? "odd" : "even"));
    getchar();
    return 0;