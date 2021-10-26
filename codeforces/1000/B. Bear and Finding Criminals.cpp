#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() 
{
	int n, a;
	cin >> n >> a;

    vector<int> d(1005);
	for(int i = 1; i <= n; ++i) cin >> d[i];

	int answer = 0;
	for(int i = 1; i <= n; ++i) 
    {
        if(d[i]) 
        {
		    int distance = i - a; 
		    int j = a - distance; 
		    if(j < 1 || j > n || d[i] == d[j])
			    ++answer;
	}
    }
        
	cout << answer << endl;
	return 0;
}