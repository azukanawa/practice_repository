#include <stdio.h>
int main()
{
    int input = 0;
    scanf("%d", &input);
    int A, U, B, Z;
    A = U = B = Z = 0;

    if (input % 2 == 0 && (4 < input && input <= 12))
    {
        A = 1;
    }
    if ((input % 2 == 0) || (input > 4 && input <= 12))
    {
        U = 1;
    }

    if (input % 2 != 0)
    {
        if (input > 4 && input <= 12)
        {
            B = 1;
        }
    }
    if (input % 2 == 0)
    {
        if (input <= 4 || input > 12)
        {
            B = 1;
        }
    }

    if ((input % 2 != 0) && (input > 12 || input <= 4))
    {
        Z = 1;
    }
    printf("%d %d %d %d", A, U, B, Z);
    return 0;
}