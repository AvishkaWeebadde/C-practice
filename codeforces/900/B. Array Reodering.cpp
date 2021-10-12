#include<iostream>
#include<vector>
#include<algorithm>
#include <numeric>
using namespace std;

int gcd(int a, int b)
{
  
    if (b == 0)
        return a;
    return gcd(b, a % b);
}


int main() 
{
  int t;
  cin >> t;
  while (t--) 
  {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    sort(a.begin(), a.end(), [](int x, int y) {
      return x % 2 < y % 2;
    });

    for(int i : a)
        cout << i << endl;
    int ans = 0;

    for (int i = 0; i < n; ++i) 
    {
      for (int j = i + 1; j < n; ++j) 
      {
        ans += gcd(a[i], a[j] * 2) > 1;
      }
    }

    cout << ans << endl;
  }
}