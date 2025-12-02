#include <stdio.h>
int main()
{
    int size = 0;
    scanf("%d", &size);
    int i = 0;
    int num[100];
    int wanted;

    int middle;
    for (i = 0; i < size; i++)
    {
        scanf("%d,", &num[i]);
    }
    int left = 0;
    int right = size - 1;
    scanf("%d", &wanted);

    if(wanted == num[right])
    {
        middle = right;
        goto a;
    }
    

    while (1)
    {
        middle = (left + right) / 2;
        if (wanted > num[middle])
        {
            left = middle;
        }
        else if (wanted < num[middle])
        {
            right = middle;
        }
        else if (wanted == num[middle])
        {
            break;
        }
    }
    a:printf("%d", middle + 1);
    return 0;
}