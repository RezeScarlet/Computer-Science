#include <stdio.h>

void bucketSort(int array[], int arraySize);
void insertionSort(int bucket[], int n);
void printArray(int array[], int arraySize);

int main() {
  printf("======= Bucket Sort =======\n");
  printf("Tamanho do Array de Inteiros: ");

  int arraySize;
  scanf("%d", &arraySize);

  int array[arraySize];

  for (int i = 0; i < arraySize; i++) {
    printf("Item %d do Array: ", i + 1);
    scanf("%d", &array[i]);
  }

  printf("\nOrdenação:\n");
  bucketSort(array, arraySize);
  return 0;
}

void bucketSort(int array[], int arraySize) {

  int maxValue = array[0];
  for (int i = 1; i < arraySize; i++) {
    if (array[i] > maxValue) {
      maxValue = array[i];
    }
  }

  int bucketCount = maxValue / 10 + 1;
  int buckets[bucketCount][arraySize];
  int bucketSizes[bucketCount];

  for (int i = 0; i < bucketCount; i++) {
    bucketSizes[i] = 0;
  }

  for (int i = 0; i < arraySize; i++) {
    int bucketIndex = array[i] / 10;
    buckets[bucketIndex][bucketSizes[bucketIndex]++] = array[i];
  }

  for (int i = 0; i < bucketCount; i++) {
    if (bucketSizes[i] > 0) {
      printf("\nBucket %d.   [] = ", i);
      printArray(buckets[i], bucketSizes[i]);
      insertionSort(buckets[i], bucketSizes[i]);
      printf("\nBucket %d Ord.   [] = ", i);
      printArray(buckets[i], bucketSizes[i]);
    }
  }

  int index = 0;
  for (int i = 0; i < bucketCount; i++) {
    for (int j = 0; j < bucketSizes[i]; j++) {
      array[index++] = buckets[i][j];
    }
  }

  printf("\nArray Ord.   [] = ");
  printArray(array, arraySize);
}

void insertionSort(int bucket[], int n) {
  int i, j, key;
  for (i = 1; i < n; i++) {
    key = bucket[i];
    j = i - 1;

    while (j >= 0 && bucket[j] > key) {
      bucket[j + 1] = bucket[j];
      j = j - 1;
    }
    bucket[j + 1] = key;
  }
}

void printArray(int array[], int arraySize) {
  for (int i = 0; i < arraySize; i++) {
    printf("%d ", array[i]);
  }
}
