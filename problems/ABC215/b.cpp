#include<iostream>
using namespace std;
 
int main()
{
  long long n;
  cin >> n;
  
  for(long long i = 0; i < n; ++i)
  {
    if((1LL<<i) > n)
    {
      cout << i - 1 << "\n";
      break;
    }
  }
  
  return 0;
}