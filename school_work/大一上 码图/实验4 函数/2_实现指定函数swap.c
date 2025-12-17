#include <stdio.h>
void swap(int* array, int n);

void swap(int* array, int n) {
  int middle = 0;
  int i = 0;
  if (array == NULL || n <= 0) {
    printf("error");
  } else {
    for (i = 0; i < n / 2; i++) {
      middle = array[i];
      array[i] = array[n - 1 - i];
      array[n - 1 - i] = middle;
    }
  }
}
