#include <stdio.h>
void count(char* str);
/*int main()
{
        char str[] = {12asddCSDA  sds23244354};
        count(str);


        return 0;
}*/

void count(char* str) {
  int i = 0;
  int blank = 0;
  int num = 0;
  int let = 0;
  for (i = 0; str[i] != '\0'; i++) {
    if (str[i] >= 97 && str[i] <= 122 || str[i] >= 65 && str[i] <= 90) {
      let++;
    } else if (str[i] >= 48 && str[i] <= 57) {
      num++;
    } else if (str[i] == 32) {
      blank++;
    }
  }
  printf("%d,%d,%d", let, num, blank);
}