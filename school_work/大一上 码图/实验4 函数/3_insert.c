#include <stdio.h>
#include <string.h>
void insert(char* s1, char* s2, int n);

void insert(char* s1, char* s2, int n) {
  int i = 0;

  int i1 = 0;
  char cpy[1000] = {0};
  int swit = 0;
  char c[] = " ";
  if (s1 == NULL || s2 == NULL || n < 0) {
    printf("error");
  }
  if (s1 != NULL && s2 != NULL && n >= 0) {
    for (i = 0; s1[i] != '\0'; i++) {
      if (s1[i] == 32) {
        swit = 1;
      }
      if (swit == 1) {
        s1[i] = 0;
      }
    }
    swit = 0;

    for (i = 0; s2[i] != '\0'; i++) {
      if (s2[i] == 32) {
        swit = 1;
      }
      if (swit == 1) {
        s2[i] = 0;
      }
    }

    if (n > strlen(s1)) {
      printf("error");
    } else {
      for (i = n; s1[i] != 0; i++) {
        cpy[i1] = s1[i];
        i1++;
        s1[i] = 0;
      }
      s1 = strcat(s1, s2);
      s1 = strcat(s1, cpy);
      s1 = strcat(s1, c);
      return;
    }
  }

  printf("error");
}