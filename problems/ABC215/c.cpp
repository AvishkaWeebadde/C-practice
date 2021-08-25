#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  string s;
  int k;
  cin >> s >> k;
  sort(s.begin(),s.end());
  while(k>1){
    //cout << s << endl;
    next_permutation(s.begin(),s.end());
    k--;
  }
  cout << s << '\n';
  return 0;
}