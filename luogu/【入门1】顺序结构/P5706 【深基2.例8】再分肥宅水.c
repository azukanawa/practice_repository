#include <stdio.h>
int main()
{
    float t = 0.0;
    int n = 0;
    scanf("%f %d", &t, &n);
    float l = t / n;
    int x = 2 * n;
    printf("%.3f\n", l);
    printf("%d\n", x);
    return 0;
}
