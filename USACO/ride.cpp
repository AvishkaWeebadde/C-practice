#include<iostream>
using namespace std;
typedef long long ll;

int main()
{
    string c, g;
    cin >> c >> g;

    ll com = 1, gr = 1;

    for(int i = 0; i < c.length(); ++i)
        com *= (c[i] - 'A' + 1);
    
        
    
    for(int i = 0; i < g.length(); ++i)
        gr *= (g[i] - 'A' + 1);

    //cout << com << " " << gr << endl;
    com = com % 47;
    gr = gr % 47;
    //cout << com << " " << gr << endl;

    if(com == gr) cout << "GO\n";
    else          cout << "AWAY\n";
    return 0;
}