#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main() {
  int cases;
  cin >> cases;
  for (int i = 0; i < cases; i++) {
    int T;
    cin >> T;
    vector<set<int>> numbers(T);
    for (int j = 0; j < T; j++) {
      int N;
      cin >> N;
      for (int k = 0; k < N; k++) {
        int value;
        cin >> value;
        numbers[j].insert(value);
      }
    }
    int Q;
    cin >> Q;
    for (int j = 0; j < Q; j++) {
      int op, set1, set2;
      vector<int> v;
      vector<int>::iterator it; 
      cin >> op >> set1 >> set2;
      switch (op) {
      case 1:
        it = set_intersection(numbers[set1].begin(), numbers[set1].end(), numbers[set2].begin(), numbers[set2].end(), v.begin());
        for (auto k = v.begin(); k != it; k++) {
            cout << *k << endl;
          }
        break;
      case 2:
        it = set_union(numbers[set1].begin(), numbers[set1].end(), numbers[set2].begin(), numbers[set2].end(), v.begin());
        for (auto k = v.begin(); k != it; k++) {
            cout << *k << endl;
          }
        break;
      }
    }
  }
  return 0;
}
