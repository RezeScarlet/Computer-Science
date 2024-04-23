#include <iostream>

using namespace std;

int main() {
  int i = 1;
  while (true) {
    int bits;
    cin >> bits;
    if (bits == 0)
      break;

    cout << "Teste " << i << endl;
    int bits50 = bits / 50;
    int bits10 = (bits % 50) / 10;
    int bits5 = (((bits % 50) % 10) / 5);
    int bits1 = (((bits % 50) % 10) % 5);

    cout << bits50 << " " << bits10 << " " << bits5 << " " << bits1 << endl << endl;

    i++;
  }

  return 0;
}
