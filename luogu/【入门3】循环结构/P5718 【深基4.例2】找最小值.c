#include <stdio.h>
int main() {
  int n, i, input, markdown = 0;
  scanf("%d", &n);
  scanf("%d", &input);
  markdown = input;
  for (i = 1; i < n; i++) {
    scanf("%d", &input);
    if (input < markdown) {
      markdown = input;
    }
  }
  printf("%d", markdown);
  return 0;
}
