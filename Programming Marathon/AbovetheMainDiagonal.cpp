#include <iostream>
using namespace std;
int main() {
  char operation;
  double M[12][12];
  cin >> operation;
  for (int i = 0; i < 11; i++) {
    for (int j = 0; j < 11; j++) {
      cin >> M[i][j];
    }
  }

  switch (operation) {
  case 'S':

    for (int i = 0; i < 11; i++) {
      for (int j = 0; j < 11; j++) {
        cin >> M[i][j];
      }
    }
    break;
  case 'M':
    break;
  }
  int A, B;
  double G1, G2, time;

  cin >> A >> B >> G1 >> G2;

  G1 = 1 + G1 / 100;

  G2 = 1 + G2 / 100;

  for (time = 0; A <= B; time++) {
    A = A * G1;
    B = B * G2;
    if (time > 100) {
      break;
    }
  }

  if (time > 100) {
    cout << "Mais de 1 seculo.\n";
  } else
    cout << time << " anos.\n";
  return 0;
}
