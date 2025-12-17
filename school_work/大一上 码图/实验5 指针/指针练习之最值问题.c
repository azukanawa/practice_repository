#include <stdio.h>
int main() {
  int n = 0;
  int max;
  int min;
  int maxposition = 0;
  int minposition = 0;
  int A[10];
  int i = 0;
  scanf("%d", &n);
  if (n <= 0) {
    printf("error");
    return 0;
  }
  for (i = 0; i < n; i++) {
    scanf("%d", &A[i]);
  }
  max = A[0];
  min = A[0];
  maxposition = 0;
  minposition = 0;

  for (i = 0; i < n; i++) {
    if (A[i] > max) {
      maxposition = i;

      max = A[i];
    } else if (A[i] < min) {
      minposition = i;
      min = A[i];
    }
  }

  printf("max:%d,position:%d\n", max, maxposition + 1);
  printf("min:%d,position:%d\n", min, minposition + 1);

  return 0;
}
