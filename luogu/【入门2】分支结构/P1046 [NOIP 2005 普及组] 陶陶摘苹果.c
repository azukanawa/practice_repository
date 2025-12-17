#include <stdio.h>
int main() {
  int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, l, n = 0;
  scanf("%d %d %d %d %d %d %d %d %d %d", &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8,
        &a9, &a10);
  scanf("%d", &l);
  l += 30;
  if (l >= a1) {
    n += 1;
  }
  if (l >= a2) {
    n += 1;
  }
  if (l >= a3) {
    n += 1;
  }
  if (l >= a4) {
    n += 1;
  }
  if (l >= a5) {
    n += 1;
  }
  if (l >= a6) {
    n += 1;
  }
  if (l >= a7) {
    n += 1;
  }
  if (l >= a8) {
    n += 1;
  }
  if (l >= a9) {
    n += 1;
  }
  if (l >= a10) {
    n += 1;
  }
  printf("%d\n", n);
  return 0;
}
