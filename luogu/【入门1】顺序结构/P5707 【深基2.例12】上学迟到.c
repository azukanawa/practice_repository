#include <stdio.h>
int main() {
  int s, v, min;  // s代表路程，v代表速度
  scanf("%d %d", &s, &v);
  if (s % v == 0) {
    min = s / v + 10;  // 如果速度能被路程整除，直接计算并加上10分钟垃圾分类时间
  } else {
    min = s / v + 11;  // 如果速度不能被路程整除，计算商并加上11分钟垃圾分类时间
  }
  if (min <= 480)  // 如果总时间小于等于480分钟
  {
    min = 480 - min;  // 计算剩余时间
  } else {
    min =
        32 * 60 - min;  // 如果总时间大于480分钟，计算剩余时间为32小时减去总时间
  }
  printf("%02d:%02d\n", min / 60, min % 60);  // 输出剩余时间，格式为HH:MM
  return 0;
}
