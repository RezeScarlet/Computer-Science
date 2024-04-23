#include <iostream>

using namespace std;
int main() {
  while (true) {
    long x, y;
    int h = 0;

    cin >> x >> y;

    if (x == 0 && y == 0) break;

    while (x || y) {
      if ((x & 1) != (y & 1)) {
        h++;
      }
      x >>= 1;
      y >>= 1;
    }

    cout << h << endl;
  }
  return 0;
}
