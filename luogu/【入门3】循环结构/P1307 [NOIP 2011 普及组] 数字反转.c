#include <stdio.h>
int main() {
  int N = 0;
  int i = 1;
  int new = 0;
  int num = 0;
  if (N < 0) {
    i = -1;
  }
  scanf("%d", &N);
  while (N != 0) {
    new = N % 10;
    num = num * 10 + new;
    N /= 10;
  }
  num = num * i;
  printf("%d", num);

  return 0;
}