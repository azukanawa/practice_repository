#include <stdio.h>
int main()
{
    int def = 1;
    int i = 1;
    for (i = 1; i < 10; i++)
    {
        def = (def + 1) * 2;
        printf("%d,", def);
    }
    printf("%d", def);
    return 0;
}