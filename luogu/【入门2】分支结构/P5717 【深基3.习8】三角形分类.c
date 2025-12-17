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

  if (a + b > c) {
    if (a * a + b * b > c * c) {
      printf("Acute triangle\n");
    }
    if (a * a + b * b == c * c) {
      printf("Right triangle\n");
    }
    if (a * a + b * b < c * c) {
      printf("Obtuse triangle\n");
    }
    if (a == b) {
      printf("Isosceles triangle\n");
    }
    if (a == b && b == c) {
      printf("Equilateral triangle\n");
    }
  } else {
    printf("Not triangle\n");
  }
  return 0;
}