#include <stdio.h>
unsigned long long squrt(unsigned long long k);

int main()
{
    unsigned long long m = 0;
    scanf("%llu", &m);
    unsigned long k = 0;
    for (k = 0; squrt(k) < m; k++)
    {
        if (squrt(k) == m)
        {
            break;
        }
        if (squrt(k + 1) > m)
        {
            break;
        }
    }
    printf("%lu", k);
    return 0;
}

unsigned long long squrt(unsigned long long k)
{
    unsigned long long i = 0;
    unsigned long long multi = 1;
    for (i = 0; i < k; i++)
    {
        multi *= 2;
    }
    return multi;
}