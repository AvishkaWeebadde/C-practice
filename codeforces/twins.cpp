#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n, tot = 0, amount = 0;
    cin >> n;
    
    int coins[n];
    
    for(int i = 0; i < n; i++)
    {
        cin >> coins[i];
        tot += coins[i];
    }

    //cout << tot << endl;
    
    sort(coins, coins + n, greater<int>());
    int i = 0, coinCount = 0;
    
    while(amount <= tot / 2 )
    {
        amount += coins[i];
        //cout << "a " <<amount << " ";
        coinCount++;
        i++;
    }
    
    cout << coinCount;
    return 0;
}