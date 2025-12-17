#include <stdio.h>
int main() {
  int x, n, i, workday = 0;
  scanf("%d %d", &x, &n);
  for (i = 0; i < n; i++) {
    if (x < 6) {
      workday += 1;
    }
    if (x == 7) {
      x = 1;
      continue;
    }
    x += 1;
  }
  printf("%d", workday * 250);
  return 0;
}