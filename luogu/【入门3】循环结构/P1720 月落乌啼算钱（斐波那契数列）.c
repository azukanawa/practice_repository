#include <math.h>
#include <stdio.h>

int main() {
  int n;

  scanf("%d", &n);

  double a = (1 + sqrt(5)) / 2;

  double b = (1 - sqrt(5)) / 2;

  double Fn = (pow(a, n) - pow(b, n)) / sqrt(5);

  printf("%.2f\n", Fn);
  return 0;
}