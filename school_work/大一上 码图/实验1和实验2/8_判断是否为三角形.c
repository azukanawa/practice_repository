#include <stdio.h>
int main()
{
    int a, b, c ,max;
    a = b = c = max = 0;
    scanf("%d,%d,%d", &a, &b, &c);
    if(a > 0 && b > 0 && c > 0){
    if(a >= b)
    {
        if(a >= c)
        {
            max = a;
        }
        if(a < c)
        {
            max = c;
        }
    }
    if(a < b)
    {
        if(b >= c)
        {
            max = b;
        }
        if(b < c)
        {
            max = c;
        }
    }
    if(max == a)
    {
        if((b + c) > a)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
    else if(max == b)
    {
        if((a + c) > b)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
    else if(max == c)
    {
        if((a + b) > c)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }}
    else
    {
        printf("error\n");
    }
    return 0;
}