#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int s[n], t[n];
  
  for(int i = 0; i < n; ++i)
  {
    cin >> s[i];
  }
  
  for(int i = 0; i < n; ++i)
  {
    cin >> t[i];
  }
  
  
  vector<int> pass(n+1);
  pass[0] = t[0];
  
  for(int i = 1; i <= n; ++i)
  {
    if(pass[i-1] + s[i - 1] < t[i])
    {
        pass[i] = pass[i-1] + s[i-1];
    }
    else
    {
        pass[i] = t[i];
    }   

        
  }
  
  
  /*for(int i = 0; i < n; ++i)
  {
      //cout << min(t[i], pass[i]) << "\n";
      cout << pass[i] << " ";
  }

  cout << endl;
  */
  
  for(int i = 0; i < n; ++i)
  {
      cout << min(t[i], pass[i]) << "\n";
      //cout << pass[i] << " ";
  }
  
  return 0;
}