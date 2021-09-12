#include<iostream>
#include<queue>
using namespace std;

int main()
{
    int n, x;
    cin >> n;

    priority_queue<int> q;

    for(int i = 0; i < n; ++i)
    {
        cin >> x;
        q.push(x);
    }

    for(int i = 0; i < 3; ++i)
    {
        cout << q.top() << "\n";
        q.pop();
    } 

}