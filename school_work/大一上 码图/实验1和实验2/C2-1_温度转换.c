#include <stdio.h>
int main() {
  float tem_c = 0;
  float tem_f = 0;
  scanf("%f", &tem_c);
  tem_f = tem_c * 9 / 5.0 + 32;
  printf("%d", (int)tem_f);

  return 0;
}