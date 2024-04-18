#include <iostream>
using namespace std;
int main() {
  char operation;
  double M[12][12], sum = 0;
  cin >> operation;
  for (int i = 0; i <= 11; i++) {
    for (int j = 0; j <= 11; j++) {
      cin >> M[i][j];
      // M[i][j] = 2;
    }
  }

  for (int i = 1; i <= 11; i++) {
    for (int j = 0; j < i; j++) {
      sum += M[j][i];
      // cout << sum << endl;
      // cout << "[" << j << "][" << i << "]" << "  ";
    }
    // cout << endl;
  }
  switch (operation) {
  case 'S':
    cout << sum << endl;
    break;
  case 'M':
    double ave = sum / 66;
    cout << ave << endl;
    break;
  }
  return 0;
}
