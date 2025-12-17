#include <stdio.h>
#define NUM_1 1
int main() {
  int i = 1;  // 遍历第一个数
  int x = 1;  // 遍历第二个数

  for (i = 9; i >= NUM_1; i--) {
    for (x = 1; x <= i; x++) {
      printf("%d*%d=%2d ", i, x, i * x);
    }
    printf("\n");
  }

  return 0;
}