#include <stdio.h>
#include <string.h>
int main()
{
    char str[10];
    int A, B, C, MIDDLE = 0;
    scanf("%d %d %d", &A, &B, &C);
    scanf("%s", str);
    if (A > B)
    {
        MIDDLE = A;
        A = B;
        B = MIDDLE;
    }
    if (A > C)
    {
        MIDDLE = A;
        A = C;
        C = MIDDLE;
    }
    if (B > C)
    {
        MIDDLE = B;
        B = C;
        C = MIDDLE;
    }

    if (strcmp(str, "ABC") == 0)
    {
        printf("%d %d %d", A, B, C);
    }
    else if (strcmp(str, "ACB") == 0)
    {
        printf("%d %d %d", A, C, B);
    }
    else if (strcmp(str, "BAC") == 0)
    {
        printf("%d %d %d", B, A, C);
    }
    else if (strcmp(str, "BCA") == 0)
    {
        printf("%d %d %d", B, C, A);
    }
    else if (strcmp(str, "CAB") == 0)
    {
        printf("%d %d %d", C, A, B);
    }
    else if (strcmp(str, "CBA") == 0)
    {
        printf("%d %d %d", C, B, A);
    }
    return 0;
}