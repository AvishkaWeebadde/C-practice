#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
#include<iomanip>
using namespace std;

bool sortbyfirdesc(const pair<double,double> &a, const pair<double,double> &b)
{
    return (a.first / (double)a.second) > (b.first / (double)b.second);
}

int main()
{
  double n, capacity;
  cin >> n >> capacity;

  vector<pair<double, double>> vw(n);

  for(int i = 0; i < n; ++i) cin >> vw[i].first >> vw[i].second;

  sort(vw.begin(), vw.end(), sortbyfirdesc);

  /*for(int i = 0; i < n; ++i)
  {
    cout << vw[i].first << " " << vw[i].second << endl;
  }*/

  double tot = 0.0;

  for(int i = 0; i < n; ++i)
  {
    if(capacity <= 0) break;

    if(capacity - vw[i].second >= 0)
    {
      capacity -= vw[i].second;
      tot += vw[i].first;
    }  
    else
    {
      tot += ((capacity * vw[i].first) / (double)vw[i].second);
      capacity = 0;
    }
  }
  
  
  cout << fixed << setprecision(4) <<  tot << endl;

  return 0;
}


  