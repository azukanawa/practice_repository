#include <stdio.h>
int main()
{
    int s1, h1, s2, h2, s3, h3, s4, h4, s5, h5, s6, h6, s7, h7 = 0;
    scanf("%d %d", &s1, &h1);
    scanf("%d %d", &s2, &h2);
    scanf("%d %d", &s3, &h3);
    scanf("%d %d", &s4, &h4);
    scanf("%d %d", &s5, &h5);
    scanf("%d %d", &s6, &h6);
    scanf("%d %d", &s7, &h7);
    int total1, total2, total3, total4, total5, total6, total7 = 0;
    total1 = s1 + h1;
    total2 = s2 + h2;
    total3 = s3 + h3;
    total4 = s4 + h4;
    total5 = s5 + h5;
    total6 = s6 + h6;
    total7 = s7 + h7;
    if (total1 <= 8 && total2 <= 8 && total3 <= 8 && total4 <= 8 && total5 <= 8 && total6 <= 8 && total7 <= 8)
    {
        printf("0\n");
    }
    else
    {
        if (total1 >= total2 && total1 >= total3 && total1 >= total4 && total1 >= total5 && total1 >= total6 && total1 >= total7)
        {
            printf("1\n ");
        }
        else if (total2 > total1 && total2 >= total3 && total2 >= total4 && total2 >= total5 && total2 >= total6 && total2 >= total7)
        {
            printf("2\n");
        }
        else if (total3 > total1 && total3 > total2 && total3 >= total4 && total3 >= total5 && total3 >= total6 && total3 >= total7)
        {
            printf("3\n");
        }
        else if (total4 > total1 && total4 > total2 && total4 > total3 && total4 >= total5 && total4 >= total6 && total4 >= total7)
        {
            printf("4\n");
        }
        else if (total5 > total1 && total5 > total2 && total5 > total3 && total5 > total4 && total5 >= total6 && total5 >= total7)
        {
            printf("5\n");
        }
        else if (total5 > total1 && total5 > total2 && total5 > total3 && total5 > total4 && total5 >= total6 && total5 >= total7)
        {
            printf("5\n");
        }
        else if (total6 > total1 && total6 > total2 && total6 > total3 && total6 > total4 && total6 > total5 && total6 >= total7)
        {
            printf("6\n");
        }
        else
        {
            printf("7\n");
        }
    }
    return 0;
}
