#include <stdio.h>
int main() {
  float s = 0;
  scanf("%f", &s);
  float sum = 0;
  float def = 2;
  int i = 0;
  while (sum < s) {
    sum += def;
    def *= 0.98;
    i++;
  }
  printf("%d\n", i);
  return 0;
}