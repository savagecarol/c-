   if(p.find(lol) != p.end())
    {
        cout << "Case #" << t<<": ";
        vector<int> r = p[lol];
        for(int i = 0 ; i < n ; i++)
            {
                cout << r[i] << " ";
            }
    }
    else
        cout << "Case #" << t<<": "<<"IMPOSSIBLE";