#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<double>per(n);
    
    for(int i = 0;i < n; i++)
    {
        cin >> per[i];
    }
    
    
    double vol{0.00};
    
    for(int i = 0; i < n; i++)
    {
        vol += per[i];
    }
    
    cout << fixed << setprecision(12) <<  vol / n;
    
    return 0;
}