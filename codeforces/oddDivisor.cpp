#include <iostream>

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
  int n;
  cin >> n;
  if (n & (n - 1)) {
    cout << "YES \n" ;
  } else {
    cout << "NO\n " ;
  } 
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}