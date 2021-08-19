#include <iostream>
#include<vector>
#include<algorithm>
#include <fstream>
using namespace std;
#define endl "\n"
void run() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
#else
#endif
}
 
 
int main() {
	//run();
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		vector<pair<int, int>> v(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i].first;
			v[i].second = i;
            cout << v[i].first << "-" << v[i].second << "\n";
		}
		sort(v.begin(), v.end());
        cout << "\n\n";
        for (int i = 0; i < n; i++) {
            cout << v[i].first << "-" << v[i].second << "\n";
		}
		int ans = 1;
		for (int i = 1; i < n; i++)
			if (v[i - 1].second + 1 != v[i].second)
				ans++;
		cout << "ans = " << ans << " "<< (ans <= k ? "YES" : "NO") << endl;
	}
}