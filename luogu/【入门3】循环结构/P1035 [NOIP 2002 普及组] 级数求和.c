#include <stdio.h>
int main() {
  int k = 0;
  scanf("%d", &k);
  double sum = 1;
  int i = 1;
  while (sum <= k) {
    i++;
    sum += 1.0 / i;
  }
  printf("%d", i);
  return 0;
}
