#include <stdio.h>
int main()
{
    int n, num1, price1, num2, price2, num3, price3, middle, box1, box2, box3, total1, total2, total3 = 0;
    scanf("%d", &n);
    scanf("%d %d", &num1, &price1);
    scanf("%d %d", &num2, &price2);
    scanf("%d %d", &num3, &price3);
    if (n % num1 == 0)
    {
        box1 = n / num1;
    }
    else
    {
        box1 = (n / num1) + 1;
    }
    total1 = box1 * price1;
    if (n % num2 == 0)
    {
        box2 = n / num2;
    }
    else
    {
        box2 = (n / num2) + 1;
    }
    total2 = box2 * price2;
    if (n % num3 == 0)
    {
        box3 = n / num3;
    }
    else
    {
        box3 = (n / num3) + 1;
    }
    total3 = box3 * price3;

    if (total1 > total2)
    {
        middle = total1;
        total1 = total2;
        total2 = middle;
    }
    if (total1 > total3)
    {
        middle = total1;
        total1 = total3;
        total3 = middle;
    }
    if (total2 > total3)
    {
        middle = total2;
        total2 = total3;
        total3 = middle;
    }
    printf("%d", total1);
    return 0;
}