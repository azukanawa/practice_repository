#include <stdio.h>
int main()
{
    int a, b, c, middle, gongyueshu, a1, c1, fenzi, fenmu = 0;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        middle = a;
        a = b;
        b = middle;
    }
    if (a > c)
    {
        middle = a;
        a = c;
        c = middle;
    }
    if (b > c)
    {
        middle = b;
        b = c;
        c = middle;
    }

    a1 = a;
    c1 = c;
    while (c % a != 0)
    {
        middle = c;
        c = a;
        a = middle % a;
    }
    gongyueshu = a;
    fenzi = a1 / gongyueshu;
    fenmu = c1 / gongyueshu;
    printf("%d"
           "/"
           "%d\n",
           fenzi, fenmu);
    return 0;
}