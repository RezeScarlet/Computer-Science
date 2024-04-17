void GetMinMax(int numbers[], int n, int max, int min) {
  if (n % 2 != 0) {
    numbers[n + 1] = numbers[n];
    n += 1;
  }
  max = numbers[1];
  min = numbers[0];
  if (numbers[0] > numbers[2]) {
    max = numbers[0];
    min = numbers[1];
  }

  for (int i = 2; i < n; i += 2) {
    if (numbers[i] > numbers[i + 1]) {
      if (numbers[i] > max)
        max = numbers[i];
      if (numbers[i + 1] < min) {
        min = numbers[i + 1];
      }

    } else {
      if (numbers[i + 1] > max)
        max = numbers[i + 1];
      if (numbers[i] < min) {
        min = numbers[i];
      }
    }
  }
}

int main() {}
