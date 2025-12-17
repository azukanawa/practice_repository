int ReverseArray(int array[], int size);
#include <stdio.h>
int ReverseArray(int array[], int size) {
  int middle = 0;
  int a = 0;
  int i = 0;
  if (size <= 0 || array == NULL) {
    return a;
  }
  if (size > 0) {
    for (int i = 0; i < size - i - 1; i++) {
      if (array[i] == array[size - i - 1]) {
        continue;
      }
      middle = array[i];
      array[i] = array[size - i - 1];
      array[size - i - 1] = middle;
    }
    a = 1;
    return a;
  }
}
