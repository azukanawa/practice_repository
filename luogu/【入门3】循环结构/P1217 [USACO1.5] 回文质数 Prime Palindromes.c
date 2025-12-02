#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int i;
    int new = 0;
    int num = 0;
    int i1 = 0;
    int l = 0;
    int isprime = 1;
    scanf("%d %d", &a, &b);
    for (i = a; i <= b; i += 2)
    {
        if (i % 2 == 0)
        {
            i++;
        }
        i1 = i;
        isprime = 1;
        num = 0;
        while (i1 != 0) // 反转数字模块
        {
            new = i1 % 10;
            num = 10 * num + new;
            i1 /= 10;
        }
        if (num == i) // 是反转数的情况下
        {
            for (l = 2; l * l <= i; l++)
            {
                if (i % l == 0)
                {
                    isprime = 0;
                    break;
                }
            }
            if (isprime == 1)
            {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}
