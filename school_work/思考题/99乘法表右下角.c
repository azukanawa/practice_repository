#include <stdio.h>
#define NUM_1 9
int main() {
  int i = 1;  // 遍历第一个数
  int x = 1;  // 遍历第二个数
  int l = 0;  // 遍历空格

  for (i = 1; i <= NUM_1; i++) {
    for (l = 0; l < 9 - i; l++) {
      printf("       ");
    }
    for (x = 1; x <= i; x++) {
      printf("%d*%d=%2d ", i, x, i * x);
    }
    printf("\n");
  }

  return 0;
}