
void bubbleSort(int data[], int n);  // Ã°ÅİÅÅĞòº¯Êı

void bubbleSort(int data[], int n)  // Ã°ÅİÅÅĞòº¯Êı
{
  int l = 0;
  int j = 0;
  int middle = 0;

  for (l = 0; l < n - 1; l++) {
    for (j = 0; j < n - 1 - l; j++) {
      if (data[j] > data[j + 1]) {
        middle = data[j];
        data[j] = data[j + 1];
        data[j + 1] = middle;
      }
    }
  }
}