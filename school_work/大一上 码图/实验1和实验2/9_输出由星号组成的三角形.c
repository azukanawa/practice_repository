#include <stdio.h>
int main()
{
    int input = 0;
    scanf("%d", &input);
    int n = 0; // 行数
    int i = 0; // 遍历行数
    int x = 0; // 遍历空格
    int y = 0; // 遍历星号
    if (input % 2 != 0 && input >= 1 && input <= 80)
    {
        n = (input + 1) / 2;
        for (i = 1; i <= n; i++)
        {
            for (x = 1; x <= n - i; x++)
            {
                printf(" ");
            }
            for (y = 1; y <= 2 * i - 1; y++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else
    {
        printf("error");
    }
    return 0;
}