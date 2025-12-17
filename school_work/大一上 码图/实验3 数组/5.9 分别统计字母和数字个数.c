#include <stdio.h>
#include <string.h>
int main() {
  char input[300];
  int i = 0;
  int num = 0;
  int letter = 0;
  gets(input);

  for (i = 0; i < strlen(input); i++) {
    if (input[i] >= 97 && input[i] <= 122 || input[i] >= 65 && input[i] <= 90) {
      letter++;
    }
    if (input[i] >= 48 && input[i] <= 57) {
      num++;
    }
  }

  printf("letters:%d,digits:%d", letter, num);

  return 0;
}