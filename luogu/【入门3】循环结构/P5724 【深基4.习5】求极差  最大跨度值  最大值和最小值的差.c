#include <stdio.h>
int main()
{
    int n = 0;
    int min = 0;
    int max = 0;
    int i = 0;
    int input = 0;
    scanf("%d", &n);
    scanf("%d", &input);
    min = input;
    max = input;
    for (i = 1; i < n; i++)
    {
        scanf("%d", &input);
        if (input <= min)
        {
            min = input;
        }
        if (input >= max)
        {
            max = input;
        }
    }
    printf("%d\n", max - min);
    return 0;
}