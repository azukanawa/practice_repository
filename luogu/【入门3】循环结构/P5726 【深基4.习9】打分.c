#include <stdio.h>
int main() {
  int n = 0;
  int min = 0;
  int max = 0;
  int input = 0;
  int i = 1;
  int sum = 0;
  float average = 0;
  scanf("%d", &n);
  scanf("%d", &input);
  min = input;
  max = input;
  sum += input;
  for (i = 1; i < n; i++) {
    scanf("%d", &input);
    if (input < min) {
      min = input;
    } else if (input > max) {
      max = input;
    }
    sum += input;
  }
  sum = sum - min - max;
  n -= 2;
  average = 1.0 * sum / n;
  printf("%.2f", average);
  return 0;
}