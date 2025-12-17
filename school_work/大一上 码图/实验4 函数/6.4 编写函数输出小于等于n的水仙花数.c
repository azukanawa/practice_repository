#include <stdio.h>
int find(int n);
/*int main()
{
        printf("%d", find(400));

        return 0;
}*/
int find(int n) {
  int n_cpy = n;
  int ret = 0;
  int num[3] = {0, 0, 0};

  int i1 = 0;
  int i_cpy = 0;

  int i = 0;

  for (i = 0; i < 3, n != 0; i++) {
    num[i] = n - n / 10 * 10;
    n = n / 10;
  }
  if (i != 3) {
    return ret;
  }

  for (i = 100; i <= n_cpy; i++) {
    i_cpy = i;
    for (i1 = 0; i1 < 3, i_cpy != 0; i1++) {
      num[i1] = i_cpy - i_cpy / 10 * 10;
      i_cpy = i_cpy / 10;
    }
    if (num[0] * num[0] * num[0] + num[1] * num[1] * num[1] +
            num[2] * num[2] * num[2] ==
        i) {
      ret++;
    }
  }

  return ret;
}
