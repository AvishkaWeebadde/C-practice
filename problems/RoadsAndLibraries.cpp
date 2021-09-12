#include <iostream>
#include<vector>
using namespace std;


vector<int> adj[100005];
bool visited[100005];
long nodes;

void dfs(int n)
{
    nodes++;
    visited[n] = true;
    for(auto i = adj[n].begin(); i != adj[n].end(); ++i)
    {
        if(!visited[*i])
            dfs(*i);
    }
}


int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n, m, a, b;
        long x, y;
        cin >> n >> m >> x >> y;
        
        for(int i = 0; i < m; ++i)
        {
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        
        long cost = 0;
        
        for(int i = 1; i <= n; ++i)
        {
            if(!visited[i])
            {
                nodes = 0;
                dfs(i);
                cost = cost + x;
                if(x > y)
                    cost = cost + (y * (nodes - 1));
                else
                    cost = cost + (x * (nodes - 1));
            }
        }
        
        cout << cost << endl;
        
        for(int i = 0; i <= n; ++i)
        {
            adj[i].clear();
            visited[i] = false;
        }
    }
    
    return 0;
}
