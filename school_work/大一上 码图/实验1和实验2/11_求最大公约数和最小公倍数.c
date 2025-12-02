#include <stdio.h>
int main()
{
    int a, b ,t ,l ,x ,y = 0;
    scanf("%d %d", &a, &b);
    x = a;
    y = b;
    if(a >= b)
    {
        t = a % b;
        while(t != 0)
        {
            a = b;
            b = t;
            t = a % b;
        }
    }
    if(a < b)
    {
        l = a;
        a = b;
        b = l;
        t = a % b;
        while (t != 0)
        {
            a = b;
            b = t;
            t = a % b;
        }
    }
    
    printf("%d,%d", b, (x * y)/b);
    return 0;
}