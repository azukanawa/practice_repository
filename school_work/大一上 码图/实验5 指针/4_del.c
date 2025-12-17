#include <stdio.h>
void del(char* s, int n, int len);
int main() {
  char c[100] = "apple ";
  del(c, 6, 6);
  printf("%s", c);

  return 0;
}
void del(char* s, int n, int len) {
  if (s == NULL || n < 0 || len < 0) {
    printf("error");
    return;
  }
  int end = 0;
  while (s[end] != ' ') {
    end++;
  }
  if (n + len > end) {
    printf("error");
  }
  int i = 0;
  for (i = 0; i <= n; i++) {
    if (*(s + i) == ' ') {
      printf("error");
      return;
    }
  }

  for (i = n;; i++) {
    *(s + i) = *(s + i + len);
    if (*(s + i + len) == ' ') {
      break;
    }
  }
}