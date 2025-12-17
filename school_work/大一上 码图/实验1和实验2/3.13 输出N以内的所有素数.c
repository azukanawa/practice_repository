#include <stdio.h>
int main() {
  int input = 0;
  int i = 1;
  int isprime = 0;
  int n = 2;
  scanf("%d", &input);
  if (input >= 2 && input <= 200) {
    for (i = 2; i <= input; i++) {
      for (n = 2; n < i; n++) {
        if (i % n == 0) {
          isprime = 1;
        }
      }
      if (isprime == 0) {
        printf("%d,", i);
      }
      isprime = 0;
    }
  }

  else {
    printf("error");
  }

  return 0;
}