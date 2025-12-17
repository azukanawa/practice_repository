#include <stdio.h>
int main() {
  int n = 0;
  int x = 0;
  int i = 1;
  int new = 0;
  int click = 0;
  scanf("%d %d", &n, &x);
  for (i = 1; i <= n; i++) {
    int a = i;
    while (a != 0) {
      new = a % 10;

      if (new == x) {
        click++;
      }
      a /= 10;
    }
  }
  printf("%d", click);

  return 0;
}
