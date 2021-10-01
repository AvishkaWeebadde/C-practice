  vector<pair<int, int>> d(m);
    int p, x;
    for(int i = 0; i < m; ++i)
    {
        cin >> p >> x;
        d.push_back(make_pair(p - 1, x));
    }

    sort(d.begin(), d.end());

    vector<int> cp;

    for(int i = 0; i < m; ++i)
    {
        cp = t;
        if(i == d[i].first)
        {
            cp[i] = d[i].second;
        }


    } 



       if(n % 2 == 0)
    {
        if(q[0] == q[1])
        {
            cout << (n / 2) * (n / 2) << "\n";
        }
        else
        {
            cout << 0 << "\n";
        }
    }
    else
    {
        if(q[0] != q[1])
        {
            cout << (n / 2) * (n / 2) << "\n";
        }
        else
        {
            cout << 0 << "\n";
        }
    }
