#include <stdio.h>
int main() {
  int m, t, s,
      apple_left; /*m是苹果总数，t是吃一个苹果所需的时间，s是过去的总时间*/
  m = t = s = apple_left = 0;  // 初始化
  scanf("%d %d %d", &m, &t, &s);
  if (t != 0) {
    int eaten_apple = s / t;  // 算出吃了几个苹果
    if (s % t != 0) {
      eaten_apple += 1;
    }
    apple_left = m - eaten_apple;
    if (s == 0) {
      printf("%d\n", m);
    } else if (eaten_apple < m) {
      printf("%d\n", apple_left);
    } else if (eaten_apple >= m) {
      printf("0\n");
    }
  } else if (t == 0) {
    printf("0\n");
  }

  return 0;
}
