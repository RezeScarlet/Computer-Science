#include <iostream>

int Sum(int a = 0, int b = 0);

int main() {
  int n1;
  int n2;

  std::cout << "N1: ";
  std::cin >> n1;

  std::cout << "N2: ";
  std::cin >> n2;

  std::cout << "Sum: " << Sum(n1, n2);
  std::cout << "\nSum without params: " << Sum();

  return 0;
}
int Sum(int a, int b) { return a + b; }
