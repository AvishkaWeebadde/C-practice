#include <iostream>
#include<vector>
using namespace std;

int gcd(int a, int b)
{
    if(a == 0)
        return b;
    return gcd(b % a, a);
}

int findGCD(vector<int> b)
{
    int res = b[0];
    for(int i = 1; i < b.size(); ++i)
    {
        res = gcd(b[i], res);
        
        if(res == 1)
            return 1;
    }
    
    return res;
}

int findLCM(vector<int> a)
{
    int res = a[0];
    
    for(int i = 1; i < a.size(); ++i)
    {
        res = ( (a[i] * res) / gcd(a[i], res) );
    }
    
    return res;
}


int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> a(n1);
    vector<int> b(n2);
    
    for(int i = 0; i < n1; ++i)
        cin >> a[i];
        
    for(int i = 0; i < n2; ++i)
        cin >> b[i];
    
    int lcm = findLCM(a);
    int hcf = findGCD(b);
    int count = 0;
    
    for(int i = lcm; i <= hcf; i += lcm)
    {
        if(hcf % i == 0)
            count++;
    }
    
    cout << count << endl;
    
    return 0;
}
