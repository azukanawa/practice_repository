#include <stdio.h>
extern int RandInt(int i, int j);
void RandomPermutation1(int n);
void RandomPermutation2(int n);
void RandomPermutation3(int n);
void Swap(int *a, int *b);

void RandomPermutation1(int n)
{
    int A[100];
    int i = 0;
    int j = 0;
    int middle = 0;
    int status = 0;
    if (n <= 0)
    {
        printf("error");
        return;
    }
    for (i = 0; i < n; i++)
    {
        A[i] = 0;
    }
    i = 0;
    while (i != n)
    {
        middle = RandInt(1, n);
        for (j = 0; j < i; j++)
        {
            if(middle == A[j])
            {
                status = 1;
                break;
            }
        }
        if(status == 1)
        {
            status = 0;
            continue;
        }
        A[i] = middle;
        i++;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d,", A[i]);
    }
    printf("0");
}

void RandomPermutation2(int n)
{
    int A[100];
    int Used[101];
    int i = 0;
    int middle = 0;

    if (n <= 0)
    {
        printf("error");
        return;
    }

    for (i = 0; i < n; i++)
    {
        A[i] = 0;
        Used[i] = 0;
    }
    Used[i] = 0;
    i = 0;

    while (i != n)
    {
        middle = RandInt(1, n);
        if (Used[middle] == 0)
        {
            A[i] = middle;
            Used[middle] = 1;
            i++;
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d,", A[i]);
    }
    printf("0");
}

void RandomPermutation3(int n)
{
    int A[100];
    int i = 0;
    if (n <= 0)
    {
        printf("error");
        return;
    }
    for (i = 0; i < n; i++)
    {
        A[i] = i + 1;
    }

    for (i = 1; i < n; i++)
    {
        Swap(&A[i], &A[RandInt(0, i)]);
    }

    for (i = 0; i < n; i++)
    {
        printf("%d,", A[i]);
    }
    printf("0");
}

void Swap(int * a, int * b)
{
    int middle = 0;
    middle = *a;
    *a = *b;
    *b = middle;
}
