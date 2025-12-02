#include <stdio.h>
int main()
{
    int a[10];
    int i = 0;

    int l = 0;
    int j = 0;
    int middle = 0;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    for (l = 0; l < 9; l++)
    {
        for (j = 0; j < 9 - l; j++)
        {
            if (a[j] > a[j + 1])
            {
                middle = a[j];
                a[j] = a[j + 1];
                a[j + 1] = middle;
            }
        }
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d", a[i]);
        if (i == 9)
        {
            break;
        }
        printf(",");
    }

    return 0;
}