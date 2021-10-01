#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> h(n);
    int power = 0;

    for(int i = 0; i < n; ++i)
    {
        cin >> h[i];
        power += h[i];
    }

    int t;
    cin >> t;

    sort(h.begin(), h.end());

    while(t--)
    {
        int def, atk;
        cin >> def >> atk;
        int coins = 0;

        auto i = lower_bound(h.begin(), h.end(), def);

        int f = h[i - h.begin() - 1];
        if(f > h[n-1]) f = h[0];
        cout << f << endl;

        if(f - def >= 0)
        {
            if(power - f < atk)
            {
                coins = atk - power + f;
                cout << coins << "ii\n";
            }
            else 
            {
                coins = 0;
                cout << coins << "ie\n";
            }
        }
        else 
        {
            if(power - f < atk)
            {
                coins = def + atk - power;
                cout << coins << "ei\n";
            }
            else
            {
                coins = def - f;
                cout << coins << "ee\n";
            }
        }

        
    }

    return 0;
}