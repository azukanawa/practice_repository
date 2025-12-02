#include <stdio.h>
int main()
{
    int h, r;
    scanf("%d %d", &h, &r);
    double V = 3.14 * r * r * h;
    double a = (20000 / V);
    int b = (int)a;
    if ((int)a - a != 0)
    {
        printf("%d\n", b + 1);
    }
    else
    {
        printf("%d\n", b);
    }
    return 0;
}
