#include <stdio.h>
int main() {
  int n = 0;
  scanf("%d", &n);
  int i = 2;
  int i1 = 0;
  int l = 2;
  int isprime = 1;
  for (i = 2; i <= n; i++) {
    for (l = 2; l * l < i; l++) {
      if (l % i == 0) {
        isprime = 0;
        break;
      }
    }

    if (isprime == 1) {
      if (n % i == 0) {
        i1 = n / i;
        break;
      }
    } else if (isprime == 0) {
      isprime = 1;
    }
  }
  printf("%d", i1);
  return 0;
}