#include <stdio.h>
int main(void)
{

    int input = 0;
    int i = 1;
    int multi = 1;
    int sum = 0;

    scanf("%d", &input);
    if (input >= 1 && input <= 10)
    {
        for (input = input; input > 0; input--)
        {
            for (i = 1; i <= input; i++)
            {
                multi *= i;
            }
            sum += multi;
            multi = 1;
        }
        printf("%d\n", sum);
    }
    else
    {
        printf("error");
    }

    return 0;
}