#include <iostream>
using namespace std;
void PrintBinary(int n, int size = 8);
int main() {
  int n;
  int k;
  while (true) {
    cin >> n >> k;
    if (n == k && k == 0) {
      break;
    }
    int min = n, max = n;

    for (int i = 0; i < k; i++) {
      int A, B, temp;
      cin >> A >> B;

      int bit1 = (n >> A) & 1;
      int bit2 = (n >> B) & 1;

      // PrintBinary(n);

      if (bit1 != bit2) {
        n ^= (1 << A);
        n ^= (1 << B);
      }

      // PrintBinary(n);

      if (n > max)
        max = n;

      else if (n < min)
        min = n;
    }
    cout << n << " " << max << " " << min << endl;
  }
  return 0;
}

void PrintBinary(int n, int size) {
  cout << n << ": ";
  for (int i = 7; i >= 0; i--) {
    cout << ((n >> i) & 1);
  }
  cout << endl;
}
