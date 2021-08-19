#include<iostream>
#include <vector>
using namespace std;

const int NMAX = 10000;
bool isthree[NMAX];

void init()
{
  
}
int main()
{
    int t, n;
    cin >> t;

    for(int i = 1; i < NMAX; ++i)
    {
        if(i % 3 == 0 || i % 10 == 3)
        {
            isthree[i] = true;
        }
    }

    vector<int> vec;
    for(int i = 0; i < NMAX; ++i)
    {
        if(isthree[i] == false)
            vec.push_back(i);
    }

    while(t--)
    {
        cin >> n;
        cout << vec[n] << "\n";
    }

    

    return 0;
}