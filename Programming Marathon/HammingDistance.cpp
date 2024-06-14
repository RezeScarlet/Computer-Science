#include <iostream>

using namespace std;
int main() {
  while (true) {
    unsigned long long x, y, z;
    int h = 0;

    cin >> x >> y;
    if (x == 0 && y == 0) break;

    z = x ^ y;
    while (z) {
      h += z & 1;
      z >>= 1;
    }

    cout << h << endl;
  }
  return 0;
}
