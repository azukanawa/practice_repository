#include <stdio.h>
int main() {
  int k = 0;
  scanf("%d", &k);
  int i = 1;    // 记录到了第几天
  int sum = 0;  // 记录金币之和
  int a = 1;
  int b = 1;
  for (i = 1; i <= k; i++) {
    sum += b;
    if (a == b) {
      a = 1;
      b += 1;
      continue;
    }
    a++;
  }
  printf("%d", sum);
  return 0;
}
