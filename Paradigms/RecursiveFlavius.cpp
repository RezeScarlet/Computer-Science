// C++ code to implement the idea

#include <bits/stdc++.h>
using namespace std;

// Recursive function to implement the Josephus problem
int josephus(int n, int k) {
  if (n == 1)
    return 1;
  else {
    // The position returned by josephus(n - 1, k)
    // is adjusted because the recursive call
    // josephus(n - 1, k) considers the
    // original position k % n + 1 as position 1
    cout << "josephus(" << n - 1 << ", " << k << ") % " << n + 1 << endl;
    return (josephus(n - 1, k) + k - 1) % n + 1;
  }
}

// Driver code
int main() {
  int n = 5;
  int k = 2;
  cout << "josephus(" << n << ", " << k << ")" << endl;
  cout << josephus(n, k);
  return 0;
}

/*
5 pessoas de k em k
*/
