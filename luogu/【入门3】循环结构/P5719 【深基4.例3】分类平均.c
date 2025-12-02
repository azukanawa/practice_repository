#include <stdio.h>
int main()
{
    int n, k = 0;
    int i = 0;
    int sum1 = 0;
    int sum2 = 0;
    int a = 0;
    int b = 0;
    float average1 = 0;
    float average2 = 0;
    scanf("%d %d", &n, &k);
    for (i = 1; i < n + 1; i++)
    {
        if (i % k == 0)
        {
            sum1 += i;
            a += 1;
        }
        if (i % k != 0)
        {
            sum2 += i;
            b += 1;
        }
    }
    average1 = 1.0 * sum1 / a;
    average2 = 1.0 * sum2 / b;
    printf("%.1f %.1f", average1, average2);
    return 0;
}
