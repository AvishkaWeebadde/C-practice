#include<iostream>
#include<algorithm>
#include<cmath>
typedef long long ll;
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        ll p1, x1, p2, x2;
        cin >> x1 >> p1 >> x2 >> p2;

        ll mn = min(p1, p2);
        p1 -= mn;
        p2 -= mn;

        if (p1 >= 7)
			cout << ">" << endl;
		else if (p2 >= 7)
			cout << "<" << endl;
		else{
			for (int i = 0; i < p1; ++i) x1 *= 10;
			for (int i = 0; i < p2; ++i) x2 *= 10;
			if (x1 < x2)
				cout << "<" << endl;
			else if (x1 > x2)
				cout << ">" << endl;
			else
				cout << "=" << endl;
		}
        
    }
    return 0;
}