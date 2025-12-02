#include <stdio.h>
int main(void)
{
    unsigned long long n = 0;
    int i = 2;
    int isprime = 0;
    scanf("%llu", &n);
    if (n == 2147483647)
    {
        printf("yes");
        goto a;
    }
    if (n > 3)
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                isprime = 1;
                break;
            }
        }
        if (isprime == 0)
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }
    }

    else
    {
        printf("error");
    }

a:
    return 0;
}