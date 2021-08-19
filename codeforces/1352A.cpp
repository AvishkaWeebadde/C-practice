#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t, n;
    vector<int> terms;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int i = 1, count = 0;
        
        while(n > 0)
        {
            if((n % 10) * i != 0)
            {
                terms.push_back((n % 10) * i);
                count++;
            }
                
            i *= 10;
            n /= 10;
        }
        
        cout << count << "\n";
        for(auto i : terms)
            if(i != 0)
                cout << i << " ";
        cout << "\n";
    }
    return 0;
}