#include <stdio.h>
#define before_x 364
#define before_k 1092
int main()
{
    int N = 0;
    int X = 100;
    int K = 1;
    int total = 0;
    scanf("%d", &N);
    for (X = 100; X >= 0; X--)
    {
        for (K = 1;; K++)
        {
            total = before_x * X + before_k * K;
            if (total > N)
            {
                break;
            }
            if (total == N)
            {
                printf("%d\n", X);
                printf("%d\n", K);
                return 0;
            }
        }
        if (total > N)
        {
            continue;
        }
    }
}