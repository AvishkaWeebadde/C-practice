/*
~ A number n is given and we have to output the number of factos it has. (1 <= n <= 10 ^ 12)
~ Brute force method - O(n) which is chekcing from 1 to n, and counting the instances where n is divisble by the current number in the loop.
~ It might be okay for constraints of input 1 <= n <= 10 ^ 8
~ When the constraints increase an optimization has to be done.

// Optimization
~ Any number n which is not a prime can be written as a product of two of its factors (say a and b) -> a * b = n, where a,b E[2, n- 1].
-> a * b = n
-> b = n / a
-> a <= b
-> a * a <= a * b
-> a * a <= n
-> a <= sqrt(n)

~ similarly for b  
-> 1 / a >= 1 / sqrt(n)
-> n / a >= n / sqrt(n)
-> b >= sqrt(n)

/ which means if we find two factors a and b of n such that ab = n, one is always less than or equal to sqrt(n) and one is always greater than 
  equal to sqrt(n).
/ factors always comes in pairs, except when the number is a perfect square where both factors are equal.
~ New optimized algorithm will run in O(sqrt(n)).

*/

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int cnt = 0;

    for (int i = 1; i * i <= n; i ++)
        if (n % i == 0) {
            cnt ++;
            cout << i << " ";
            if (i != n/i)
            {
                cnt ++;
                cout << n << " " << i << " " << n / i << endl;
            }
                
        }
    cout << endl;
    cout << cnt << endl;

    return 0;
}