#include <stdio.h>
#include <string.h>

int main() {
  int i = 0;
  int j = 0;
  char input[51];
  char output[51];
  gets(input);
  for (i = 0; i < strlen(input); i++) {
    if (input[i] >= 48 && input[i] <= 57 || input[i] >= 97 && input[i] <= 122 ||
        input[i] >= 65 && input[i] <= 90) {
      output[j] = input[i];
      j++;
      continue;
    } else {
      if (input[i] == input[i + 1]) {
        output[j] = input[i];
        j++;
        for (i; input[i] == input[i + 1] && i < strlen(input); i++) {
        }
      }
    }
  }
  for (i = 0; i < j; i++) {
    printf("%c", output[i]);
  }
  getchar();

  return 0;
}
