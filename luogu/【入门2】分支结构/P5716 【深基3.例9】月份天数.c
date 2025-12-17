#include <stdio.h>
int main() {
  int year, month = 0;
  scanf("%d %d", &year, &month);
  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
    if (month == 2) {
      printf("29\n");
    }
  } else {
    if (month == 2) {
      printf("28\n");
    }
  }
  if (month <= 7) {
    if (month % 2 != 0) {
      printf("31\n");
    } else if ((month != 2) && (month % 2 == 0)) {
      printf("30\n");
    }
  } else if (month > 7) {
    if (month % 2 == 0) {
      printf("31\n");
    } else {
      printf("30\n");
    }
  }
}
