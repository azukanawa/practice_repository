#define MAX(a, b) (a > b) ? a : b

#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d,%d,%d", &a, &b, &c);
    printf("%d", MAX(MAX(a, b), c));

    return 0;
}