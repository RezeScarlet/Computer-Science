#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {

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
  }
  return 0;
}
