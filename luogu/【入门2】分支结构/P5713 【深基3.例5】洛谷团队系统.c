#include <stdio.h>
int main() {
  int n, local, luogu = 0;
  scanf("%d", &n);
  local = 5 * n;
  luogu = 3 * n + 11;
  if (local < luogu) {
    printf("Local");
  } else {
    printf("Luogu");
  }
  return 0;
}