#include<iostream>
#include<set>
using namespace std;

int main()
{
    int n;
    int p, q;
    set<int> level;
    
    cin >> n;
    
    cin >> p;
    int pLevels;
    
    for(int i = 0; i < p; i++)
    {
        cin >> pLevels;
        level.insert(pLevels);
    }
    
    cin >> q;
    int qLevels;
    
    for(int i = 0; i < q; i++)
    {
        cin >> qLevels;
        level.insert(qLevels);
    }
    
    if(level.size() == n)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";
        
    return 0;
}