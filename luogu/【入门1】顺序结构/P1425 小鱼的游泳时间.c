#include <stdio.h>
int main()
{
    int h_1, m_1, h_2, m_2;
    scanf("%d %d %d %d", &h_1, &m_1, &h_2, &m_2);
    int t_1 = h_1 * 60 + m_1;
    int t_2 = h_2 * 60 + m_2;
    int t = t_2 - t_1;
    int h_3 = t / 60;
    int m_3 = t % 60;
    printf("%d %d\n", h_3, m_3);
    return 0;
}
