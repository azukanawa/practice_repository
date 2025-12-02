#include <stdio.h>
int main()
{
    int z3, l4, w5;
    for (z3 = 0; z3 <= 1; z3++)
    {
        for (l4 = 0; l4 <= 1; l4++)
        {
            for (w5 = 0; w5 <= 1; w5++)
            {
                int condition1 = ((z3 == 1) && (l4 == 0)) || ((z3 == 0) && (l4 == 1));
                int condition2 = ((l4 == 1) && (w5 == 0)) || ((l4 == 0) && (w5 == 1));
                int condition3 = ((w5 == 1) && (z3 == 0 && l4 == 0)) || ((w5 == 0) && (z3 == 1 || l4 == 1));

                if (condition1 == 1 && condition2 == 1 && condition3 == 1)
                {
                    switch (z3)
                    {
                    case 1:
                        printf("ZhangSan speaks the truth.\n");
                        break;
                    default:
                        printf("ZhangSan lies.\n");
                        break;
                    }

                    switch (l4)
                    {
                    case 1:
                        printf("LiSi speaks the truth.\n");
                        break;
                    default:
                        printf("Lisi lies.\n");
                        break;
                    }

                    switch (w5)
                    {
                    case 1:
                        printf("WangWU speaks the truth.\n");
                        break;
                    default:
                        printf("WangWU lies.\n");
                        break;
                    }
                }
            }
        }
    }

    return 0;
}