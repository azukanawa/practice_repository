#include <stdio.h>
int main() {
  int electricity = 0;
  float charge = 0;
  scanf("%d", &electricity);
  if (electricity <= 150) {
    charge = 0.4463 * electricity;
  }
  if (electricity > 150 && electricity <= 400) {
    charge = 0.4463 * 150 + 0.4663 * (electricity - 150);
  }
  if (electricity > 400) {
    charge = 0.4463 * 150 + 0.4663 * (400 - 150) + 0.5663 * (electricity - 400);
  }
  printf("%.1f", charge);
  return 0;
}