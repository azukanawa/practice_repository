#include <stdio.h>
#include <string.h>
void *reversememcpy(void *destination, const void *source, int num);

void *reversememcpy(void *destination, const void *source, int num)
{
    int n = 0;

    if (destination == NULL || source == NULL || num < 0)
    {
        printf("error");
    }
    else
    {
        for (n = 0; n < num; n++)
        {
            *((char *)destination + n) = *((char *)source + num - 1 - n);
            if ((char *)destination + n > (char *)source + num - 1 - n)
            {
                printf("error");
                break;
            }
        }
    }

    return destination;
}