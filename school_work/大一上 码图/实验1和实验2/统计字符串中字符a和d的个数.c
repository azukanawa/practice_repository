#include <stdio.h>
int main()
{
    char a[50];
    int n = 0;
    int i = 0;
    int num_a = 0;
    int num_d = 0;
    scanf("%s", &a);
    n = sizeof(a) / sizeof(a[0]);
    for (i = 0; i < n; i++)
    {
        if (a[i] == 97)
        {
            num_a += 1;
        }
        if (a[i] == 100)
        {
            num_d += 1;
        }
    }
    printf("a:%d,d:%d", num_a, num_d);

    return 0;
}