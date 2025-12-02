#include <stdio.h>
int main()
{
    int a1, a2, a3, a4, a5, a6, a7, a8, a9;
    int ch = 'X';
    int sum, mod = 0;
    int cha = 0;
    scanf("%1d-%1d%1d%1d-%1d%1d%1d%1d%1d-%d", &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &ch);
    sum = a1 * 1 + a2 * 2 + a3 * 3 + a4 * 4 + a5 * 5 + a6 * 6 + a7 * 7 + a8 * 8 + a9 * 9;
    mod = sum % 11;
    cha = mod - ch;
    if (mod < 10)
    {
        if (cha == 0)
        {
            printf("Right\n");
        }
        else
        {
            printf("%d-%d%d%d-%d%d%d%d%d-%d\n", a1, a2, a3, a4, a5, a6, a7, a8, a9, mod);
        }
    }
    if (mod == 10)
    {
        if (ch == 88)
        {
            printf("Right\n");
        }
        else
        {
            printf("%d-%d%d%d-%d%d%d%d%d-X\n", a1, a2, a3, a4, a5, a6, a7, a8, a9);
        }
    }
    return 0;
}