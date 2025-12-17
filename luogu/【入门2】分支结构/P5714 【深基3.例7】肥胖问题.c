#include <stdio.h>
int main() {
  float m, h = 0.0;
  scanf("%f %f", &m, &h);
  float BMI = m / (h * h);
  if (BMI < 18.5) {
    printf("Underweight\n");
  } else if (BMI >= 18.5 && BMI < 24) {
    printf("Normal\n");
  } else {
    printf("%.4f\n", BMI);
    printf("Overweight\n");
  }
  return 0;
}