#include <stdio.h>
double squrt(double x, double a);
double jiecheng(double i);
int main() {
  double x = 0;
  double n = 0;
  double e_x = 0;
  double i = 0;
  scanf("%lf %lf", &x, &n);
  if (x == 0) {
    printf("1.000000");
  } else if (n >= 0) {
    for (i = 0; i <= n; i++) {
      e_x += squrt(x, i) / jiecheng(i);
    }
    printf("%.6lf", e_x);
  } else {
    printf("error");
  }

  return 0;
}

double squrt(double x, double a) {
  double i = 0;
  double mul = 1;
  for (i = 1; i <= a; i++) {
    mul *= x;
  }
  return mul;
}

double jiecheng(double i) {
  double a = 1;
  double b = 1;
  for (a = 1; a <= i; a++) {
    b *= a;
  }
  return b;
}