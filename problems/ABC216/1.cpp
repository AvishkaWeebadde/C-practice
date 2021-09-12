#include<iostream>
using namespace std;
 
int main()
{
  double f;
  cin >> f;
  
  int t = f * 10;
  int rem = t % 10;
  int n = t / 10;
  
  if(rem < 3) cout << n << "-\n";
  else if(rem < 6) cout << n << "\n";
  else             cout << n << "+\n";
  
  return 0;
}