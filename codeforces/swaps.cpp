#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; ++i) cin >> a[i];
        for(int i = 0; i < n; ++i) cin >> b[i];
        int count = 0;
        for(int i = 0; i < n; ++i)
        {
           for(int j = 0; j < i+1; ++j)
           {
               if(b[i] < a[j])
               {
                   count++;
               }
           }
        }

        cout << count << "ans\n";

    }
}