#include <stdio.h>
int main() {
  int a, b, c, middle = 0;
  scanf("%d %d %d", &a, &b, &c);
  if (a > b) {
    middle = a;
    a = b;
    b = middle;
  }
  if (a > c) {
    middle = a;
    a = c;
    c = middle;
  }
  if (b > c) {
    middle = b;
    b = c;
    c = middle;
  }
  printf("%d %d %d", a, b, c);
  return 0;
}