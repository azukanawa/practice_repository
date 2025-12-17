#include <math.h>
#include <stdio.h>
int main() {
  float a, b, c = 0.0;
  scanf("%f %f %f", &a, &b, &c);
  float p = (a + b + c) / 2;
  float x = p * (p - a) * (p - b) * (p - c);
  float y = pow(x, 0.5);
  printf("%.1f\n", y);

  return 0;
}
