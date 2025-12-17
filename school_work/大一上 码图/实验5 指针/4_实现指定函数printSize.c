#include <stdio.h>
void printSize(int* first, int* last);

void printSize(int* first, int* last) {
  int i = 1;

  if (first == NULL || last == NULL || first > last) {
    printf("error");
    return;
  }

  while (first < last) {
    first++;
    i++;
  }
  printf("%d,%d\n", i, 4 * i);
  return;
}