#include <iostream>
using namespace std; 
int main() {
 
    double A, B, C;
    cin >> A;
    cin >> B;
    cin >> C;

    if (A < B) swap(A, B);
    if (A < C) swap(A, C);
    if (B < C) swap(B, C);

    if (A>=B+C) {
      cout << "NAO FORMA TRIANGULO\n";
      return 0;
    }

    if (A * A == B * B + C * C) cout << "TRIANGULO RETANGULO\n";
    if (A * A > B * B + C * C) cout << "TRIANGULO OBTUSANGULO\n";
    if (A * A < B * B + C * C) cout << "TRIANGULO ACUTANGULO\n";
    if (A == B && B == C) cout << "TRIANGULO EQUILATERO\n";
    if (A == B && B != C) cout << "TRIANGULO ISOSCELES\n";
    if (A == C && C != B) cout << "TRIANGULO ISOSCELES\n";
    if (C == B && B != A) cout << "TRIANGULO ISOSCELES\n";
 
    return 0;
}
