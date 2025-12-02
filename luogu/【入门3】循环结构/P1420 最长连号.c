#include <stdio.h>
int main()
{
    int n = 0;
    int i = 0;
    int num = 1;
    int l = 0;
    scanf("%d", &n);
    int x[n];
    int lianhao[n];
    int max;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (l = i;; l++)
        {
            if (x[l + 1] == x[l] + 1)
            {
                num++;
            }
            else
            {
                lianhao[i] = num;
                num = 1;
                break;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        if (i == 0)
        {
            max = lianhao[i];
        }
        else
        {
            if (lianhao[i] > max)
            {
                max = lianhao[i];
            }
        }
    }

    printf("%d\n", max);
    return 0;
}