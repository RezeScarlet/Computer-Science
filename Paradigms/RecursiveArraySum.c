#include <stdio.h>

int SomaArray(int array[], int index);

int main() {
  int array[5] = {10, 5, 1, 2, 5};
  printf("%d", SomaArray(array, 4));
  return 0;
}

int SomaArray(int array[], int index) {
  if (index < 0)
    return 0;
  return array[index] + SomaArray(array, index - 1);
}
