#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int b = a % 4;
    int c = a % 100;
    int d = a % 400;
    if (b == 0 && c != 0)
    {
        printf("1\n");
    }
    else if (d == 0)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
    return 0;
}