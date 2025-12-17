#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
  int number = 0;
  srand((unsigned)time(NULL));
  number = rand() % 100;
  int input = 0;
  while (1) {
    scanf("%d", &input);
    if (input > number) {
      printf("your guess is bigger\n");
    } else if (input < number) {
      printf("your guess is smaller\n");
    } else {
      break;
    }
  }
  printf("you are correct\n");
  return 0;
}
