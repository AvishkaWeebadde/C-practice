#include<iostream>
#include<vector>
using namespace std;

const int SIZE = 100005;

vector<int> pfact(int a)
{
  vector<int> facts;
  
  for(int i = 2; i * i <= a; ++i)
  {
    while(a % i == 0)
    {
      a /= i;
      facts.push_back(i);
    }
  }
  
  if(a > 1)
  {
    facts.push_back(a);
  }
  
  return facts;  
}


int main()
{
  int n, m;
  cin >> n >> m;
  
  vector<bool> fl(SIZE,true);
  
  while(n--)
  {
    int a;
    cin >> a;
    vector<int> divs = pfact(a);
    
    for(auto i : divs)
    {
      if(fl[i])
      {
        for(int j = i; j < SIZE; j += i)
        {
          fl[j] = false;
        }
      }
    }
  }
  
  vector<int> res;
  
  for(int i = 1; i <=m; ++i)
  {
    if(fl[i])
    {
      res.push_back(i);
    }
  }
  
  cout << res.size() << "\n";
  for(auto i : res)
  {
    cout << i << "\n";
  }
    
  return 0;
}    