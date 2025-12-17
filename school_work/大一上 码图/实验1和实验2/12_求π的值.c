#include <stdio.h>
int main() {
  float PI_2 = 1;  // 记录二分之Π
  float input = 0.0;
  float x = 0.0;  // 用来记录要加的数
  float a = 1;
  float b = 3;
  float l = 1.0;
  scanf("%f", &input);
  do {
    x = a / b;
    a += 1;
    b += 2;
    l = l * x;
    PI_2 += l;
  } while ((2 * l) >= input);

  printf("%.6f", 2 * PI_2);
  return 0;
}