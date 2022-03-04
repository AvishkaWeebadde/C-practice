#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;


bool sortbyEndAsc(const pair<int, int> &a, const pair<int, int> &b)
{
    return a.second < b.second;
}

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> segment(n);

    for(int i = 0; i < n; ++i)
    {
        cin >> segment[i].first >> segment[i].second;
    }

    sort(segment.begin(), segment.end(), sortbyEndAsc);

    /*for(int i = 0; i < n; ++i)
    {
        cout << segment[i].first << " " << segment[i].second << endl;
    }*/

    vector<int> minPoints;

    int pt = segment[0].second;
    minPoints.push_back(pt);

    for(int i = 1; i < segment.size(); ++i)
    {
        //cout << "inside loop" <<endl;
        if(pt < segment[i].first || pt > segment[i].second)
        {
            //cout << "done" << endl;
            pt = segment[i].second;
            minPoints.push_back(pt);
        }
    }

    cout << minPoints.size() << "\n";
    for(int i = 0; i < minPoints.size(); ++i) cout << minPoints[i] << " ";
    cout << endl;


    return 0;
}