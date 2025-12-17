#include <stdio.h>
int main() {
  int L = 0;        // 输入口袋负重
  int sum = 0;      // 记录质数之和
  int i = 0;        // 用来统计有几个质数
  int n = 2;        // 数字遍历
  int a = 2;        // 因子遍历
  int isprime = 0;  // 判断是否是质数
  scanf("%d", &L);

  do {
    for (a = 2; a < n; a++) {
      if (n % a == 0) {
        isprime = 1;
      }
    }
    if (isprime == 0) {
      sum += n;
      if (sum > L) {
        break;
      }
      printf("%d\n", n);
      i++;
    }
    isprime = 0;
    n = n + 1;
  } while (1);
  printf("%d\n", i);

  return 0;
}
