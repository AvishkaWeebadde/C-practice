#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;

int main()
{
  ll a, b;
  cin >> a >> b;

  int x = pow(32, abs(a-b));
  cout << x << "\n";
  
  return 0;
}