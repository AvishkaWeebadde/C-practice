#include <iostream>

using namespace std;

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
	
	int t;
	cin >> t;
	while (t--) 
    {
		string x;
		cin >> x;
		int dig = x[0] - '0' - 1; // 0 has ascii value of 48. to normalize other values wrt to it '0' value is reduced from it.
        //cout << (int)x[0] << " " << (int)'0' <<" " << x[0] - 1 << endl;
		int len = x.size(); // length will be always 1, 2, 3 or 4.
		cout << dig * 10 + len * (len + 1) / 2 << endl; 
	}
	
	return 0;
}

/* my solution
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        string s;
        cin >> s;
        
        int presses = (s[0] - '0') * 10;
        int len = s.length();
        if(len == 4)      cout << presses << "\n";
        else if(len == 3) cout << presses - 4 << "\n";
        else if(len == 2) cout << presses - 7 << "\n";
        else if(len == 1) cout << presses - 9 << "\n";
    }
    
    return 0;
}

*/