#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> optimal_sequence(int n) {
    vector<int> steps(n + 1, 0);
    vector<int> sequence;

    int t1, t2, t3;

    for (int i = 2; i <= n; ++i)
    {
        t1 = t2 = t3 = std::numeric_limits<int>::max();

        if(i - 1 >= 0)
            t1 = steps[i - 1] + 1;
        if(i % 2 == 0)
            t2 = steps[i / 2] + 1;
        if(i % 3 == 0)
            t3 = steps[i / 3] + 1;

        steps[i] = min(min(t1, t2), t3);
    }

    int val = steps[n];

    while(n > 1) {
        if(n % 3 == 0 && steps[n / 3] + 1 == steps[n]) {
            sequence.push_back(n);
            n /= 3;
        }
        else if(n % 2 == 0 && steps[n / 2] + 1 == steps[n]) {
            sequence.push_back(n);
            n /= 2;
        }
        else if(steps[n - 1] + 1 == steps[n]) {
            sequence.push_back(n);
            n -= 1;
        }
    }

    sequence.push_back(1);
    reverse(sequence.begin(), sequence.end());
    return sequence;
}

int main() {

    int n;
    cin >> n;

    vector<int> result = optimal_sequence(n);
    cout << result.size() - 1 << endl;

    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}