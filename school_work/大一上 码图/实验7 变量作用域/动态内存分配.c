#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a;
    scanf("%d", &a);
    int *array = (int *)malloc(a * sizeof(int));
    int i = 0;
    int j = 0;
    int middle = 0;
    for (i = 0; i < a; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < a; i++)
    {
        for (j = 0; j < a - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                middle = array[j];
                array[j] = array[j + 1];
                array[j + 1] = middle;
            }
        }
    }

    for (i = 0; i < a; i++)
    {
        if (i == a - 1)
        {
            printf("%d", array[i]);
            break;
        }
        printf("%d,", array[i]);
    }
    free(array);
    return 0;
}