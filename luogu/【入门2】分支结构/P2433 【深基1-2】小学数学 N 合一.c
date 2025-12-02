#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int number = 0;
    scanf("%d", &number);
    switch (number)
    {
    case 1:
        printf("I love Luogu!\n");
        break;
    case 2:
        int apple_A = 2, apple_U = 4;
        const int APPLE = 10;
        int total = apple_A + apple_U;
        int remain = APPLE - total;
        printf("%d %d\n", total, remain);
        break;
    case 3:
        int average = 14 / 4;
        int mod = 14 % 4;
        int sub = average * 4;
        printf("%d\n%d\n%d\n", average, sub, mod);
        break;
    case 4:
        double ml = 500.0 / 3;
        printf("%.3f\n", ml);
        break;
    case 5:
        int l_1 = 260, v_1 = 12, l_2 = 220, v_2 = 20;
        int t = (l_1 + l_2) / (v_1 + v_2);
        printf("%d\n", t);
        break;
    case 6:
        double x = 6, y = 9;
        double z = sqrt(x * x + y * y);
        printf("%.4f\n", z);
        break;
    case 7:
        int save = 100;
        printf("%d\n", save + 10);
        save += 10;
        printf("%d\n", save - 20);
        save -= 20;
        printf("%d\n", save - save);
        save = 0;
        break;
    case 8:
        int r = 5;
        float Π = 3.141593;
        float C = 2 * Π * r;
        float S = Π * r * r;
        float V = 4.0 / 3.0 * Π * r * r * r;
        printf("%.4f\n", C);
        printf("%.4f\n", S);
        printf("%.3f\n", V);
        break;
    case 9:
        int peach_left = 1;
        int i = 0;
        while (i < 3)
        {
            peach_left = (peach_left + 1) * 2;
            i += 1;
        }
        printf("%d\n", peach_left);
        break;
    case 10:
        printf("9\n");
        break;
    case 11:
        int va = 5, vb = 8;
        float time = 100.0 / (vb - va);
        printf("%.4f\n", time);
        break;
    case 12:
        printf("13\nR\n");
        break;
    case 13:
        int R1 = 4, R2 = 10;
        float V1 = (4.0 / 3.0) * 3.141593 * R1 * R1 * R1;
        float V2 = (4.0 / 3.0) * 3.141593 * R2 * R2 * R2;
        float VV = V2 + V1;
        float LL = 1.0 / 3;
        float length = pow(VV, LL);
        int length_int = (int)length;
        printf("%d\n", length_int);
        break;
    case 14:
        printf("50\n");
        break;
    }

    return 0;
}