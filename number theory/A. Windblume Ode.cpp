#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;

bool isPrime(int n)
{
    if(n <= 1)
        return false;
    

    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }

    return true;

}


int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> vec(n);
        int tot = 0;

        for(int i = 0; i < n; ++i)
        {
            cin >> vec[i];
            tot += vec[i];
        }

        sort(vec.begin(), vec.end());
        //cout << "tot" << tot << endl;
        if(isPrime(tot))
        {
            cout << n - 1 << "a\n";
            for(int i = 2; i <= n; ++i)
                cout << i << " ";
        }
        else
        {
            cout << n << "a\n";
            for(int i = 1; i <= n; ++i)
                cout << i << " ";
        }
        cout << endl;

    }
}
