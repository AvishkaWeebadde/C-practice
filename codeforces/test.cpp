#include<iostream>
#include <string>
using namespace std;

int main()
{
  string s;
  getline(cin, s);
  int x =  - '0'
  int y = (s[0] - '0') - (s[4] - '0');
  int res = (s[2] == '+') ? x : y;
  cout << res << endl;
}