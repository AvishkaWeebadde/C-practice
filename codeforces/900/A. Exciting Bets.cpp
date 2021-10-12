#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long a,b;
        cin >> a >> b;
        if(a==b) cout << 0 << " " << 0 << '\n';
        else
        {
            // gcd(a, b) == gcd(a - b, b) if a > b
            long long gcd = abs(a-b);

            // from editorial
            // To achieve the required GCD, we need to make b a multiple of g=a−b using as few operations as possible. 
            //There are two ways to do so − decrease b to the largest multiple of g less than or equal to b or 
            //increase b to the smallest multiple of g greater than b. 
            //The number of operations required to do so are bmodg and g−bmodg respectively.
            long long op = min(a % gcd, gcd - a % gcd);
            cout << gcd << " " << op << '\n';
        }
    }
}