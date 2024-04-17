#include <stdio.h>
void MoveTower(int tower1[], int tower2[], int tower3[], int size);
void printArray(int array[], int arraySize);

int main() {
  int size;
  printf("Size: ");
  scanf("%d", &size);

  int tower1[size] = {};
  int tower2[size] = {};
  int tower3[size] = {};

  for (int i = 0; i < size; i++) {
    tower1[i] = size - i;
  }

  MoveTower(tower1, tower2, tower3, size);
}
void MoveTower(int tower1[], int tower2[], int tower3[], int size) {
  printArray(tower1, size);
  printArray(tower2, size);
  printArray(tower3, size);
  
}

void printArray(int array[], int arraySize) {
  for (int i = 0; i < arraySize; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}
