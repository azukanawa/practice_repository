#include <stdio.h>
int main() {
  float a = 0.0;
  scanf("%f", &a);
  int b = (int)a;
  int a_1 = a / 100;
  int a_23 = b % 100;
  int a_2 = a_23 / 10;
  int a_3 = a_23 % 10;
  int c = (int)((a - b) * 10 + 0.5);
  printf("%d.%d%d%d", c, a_3, a_2, a_1);
  return 0;
}