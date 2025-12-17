#include <stdio.h>

int main() {
  char a[21];
  int i = 0;
  int status = 1;

  scanf("%s", a);

  for (i = 0; a[i] != '\0'; i++) {
    if ((a[i] >= 65 && a[i] <= 90) || (a[i] >= 97 && a[i] <= 122)) {
      if (a[i] >= 87 && a[i] <= 90) {
        a[i] = a[i] - 87 + 65;
      } else if (a[i] >= 119 && a[i] <= 122) {
        a[i] = a[i] - 119 + 97;
      } else {
        a[i] += 4;
      }
    } else {
      printf("error");
      status = 0;
      break;
    }
  }

  if (status == 1) {
    for (i = 0; a[i] != '\0'; i++) {
      printf("%c", a[i]);
      if (i == 19) {
        break;
      }
    }
  }

  return 0;
}
