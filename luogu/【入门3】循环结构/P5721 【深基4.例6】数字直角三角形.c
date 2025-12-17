#include <stdio.h>
int main() {
  int n = 0;
  scanf("%d", &n);
  int i = 1;  // 用来输入数字
  int l = n;  // 用来控制打印行数
  int x = 0;
  while (n > 0) {
    printf("%02d", i);
    i += 1;
    x += 1;
    if (x == l) {
      printf("\n");
      x = 0;
      l -= 1;
    }
    if (l == 0) {
      break;
    }
  }
  return 0;
}
