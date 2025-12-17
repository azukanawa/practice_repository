#include <stdio.h>
#include <string.h>
void my_strcat(char* destination, const char* source);
void my_strcat(char* destination, const char* source) {
  char cpy[300];
  int i = 0;

  if (source == NULL || destination == NULL) {
    printf("error\n");
    return;
  }

  for (i = 0; *source != ' '; source++, i++) {
    cpy[i] = *source;
  }
  cpy[i] = 0;

  i = 0;
  while (1) {
    if (*destination == ' ') {
      *destination = 0;
      break;
    }
    destination++;
  }

  destination = strcat(destination, cpy);
  while (1) {
    if (*destination == 0) {
      *destination = ' ';
      break;
    }
    destination++;
  }
}