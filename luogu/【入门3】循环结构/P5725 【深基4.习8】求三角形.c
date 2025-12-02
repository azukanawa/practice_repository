#include <stdio.h>
int main()
{
    int input = 0; // 输入
    int i = 1;     // 数字打印
    int l = 0;     // 换行
    int x = 1;     // 空格
    int timer = 0;
    int input1 = 0;
    scanf("%d", &input);
    for (i = 1; i <= input * input; i++)
    {
        printf("%02d", i);
        l += 1;
        if (l == input)
        {
            printf("\n");
            l = 0;
        }
    }
    printf("\n");
    i = 1;
    input1 = input; // 数字备份
    for (l = 1; l <= input; l++)
    {
        for (x = 1; x <= 2 * (input1 - 1); x++)
        {
            printf(" ");
        }
        input1 -= 1;
        for (timer = 1; timer <= l; timer++)
        {
            printf("%02d", i);
            i++;
        }
        printf("\n");
    }
    return 0;
}