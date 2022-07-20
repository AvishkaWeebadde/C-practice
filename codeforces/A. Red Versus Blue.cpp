#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, r, b;
        cin >> n >> r >> b; // n12 r10 b2

        int smallGroups = r / (b + 1); // smallGroups = 10 / (2+1) == 3
        int bigGroup = smallGroups + 1;// bigGroup = 3 + 1 = 4
        int nBig = r % (b + 1);        // nBig = 10 % (2+1) = 1
        int nSmall = b + 1 - nBig;     // nSmall = 2 + 1 - 1 = 2

        /*
        ** for(int i = 0; i < 2; ++i) {
        **  if(i != 0) print B
        **  for(int j = 0; j < 3; ++j) print R
        ** }
        ** ==> i=0,j=0 RRR/ i=1,j=1 RRRBRRR
        */

        for (int i = 0; i < nSmall; ++i) {              
            if(i != 0)
                cout << 'B';
            for (int j = 0; j < smallGroups; ++j) {
                cout << 'R';
            }
        }

        /*
        ** for(int i = 0; i < 1; ++i) {
        **  print B
        **  for(int j = 0; j < 4; ++j) {
        **      print R
        **  }
        ** }
        ** ==> RRRBRRR/ i=0,j=0 RRRBRRRBRRRR//
        */

        for (int i = 0; i < nBig; ++i) {
            cout << 'B';
            for (int j = 0; j < bigGroup; ++j) {
                cout << 'R';
            }
        }
        cout << endl;
    }
}