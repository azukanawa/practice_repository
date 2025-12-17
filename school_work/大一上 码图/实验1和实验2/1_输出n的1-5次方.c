#include <stdio.h>
int main() {
  int input = 0;
  scanf("%d", &input);
  int input_2 = input * input;
  int input_3 = input * input * input;
  int input_4 = input * input * input * input;
  int input_5 = input * input * input * input * input;
  printf("%d %d %d %d %d\n", input, input_2, input_3, input_4, input_5);
  return 0;
}