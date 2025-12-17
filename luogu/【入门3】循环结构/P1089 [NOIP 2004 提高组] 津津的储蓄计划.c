#include <stdio.h>
#define SALARY 300
int main() {
  int a1 = 0;
  int a2 = 0;
  int a3 = 0;
  int a4 = 0;
  int a5 = 0;
  int a6 = 0;
  int a7 = 0;
  int a8 = 0;
  int a9 = 0;
  int a10 = 0;
  int a11 = 0;
  int a12 = 0;

  int left = 0;
  int storage = 0;

  int i = 0;

  scanf("%d", &a1);
  scanf("%d", &a2);
  scanf("%d", &a3);
  scanf("%d", &a4);
  scanf("%d", &a5);
  scanf("%d", &a6);
  scanf("%d", &a7);
  scanf("%d", &a8);
  scanf("%d", &a9);
  scanf("%d", &a10);
  scanf("%d", &a11);
  scanf("%d", &a12);
  int a[12] = {a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12};
  for (i = 0; i < 12; i++) {
    if (left + SALARY < a[i]) {
      printf("-%d", i + 1);
      break;
    }
    left += SALARY - a[i];
    if (left / 100 > 0) {
      storage += (left / 100) * 100;
      left -= (left / 100) * 100;
    }
    if (i == 11) {
      printf("%d", (int)(1.2 * storage) + left);
    }
  }

  return 0;
}