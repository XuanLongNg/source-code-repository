        cin >> n >> m;
        vector<vi> a(n, vi(m));

        for (auto &i : a)
            for (auto &u : i)
                cin >> u;

        vi res;
        while (!a.empty() && !a.begin()->empty())
        {
            res.insert(res.end(), a.begin()->begin(), a.begin()->end());
            a.erase(a.begin());

            if (a.empty())
                break;
            for (auto &i : a)
            {
                res.push_back(*i.rbegin());
                i.pop_back();
            }

            if (a.begin()->empty())
                break;
            res.insert(res.end(), a.rbegin()->rbegin(), a.rbegin()->rend());
            a.pop_back();

            if (a.empty())
                break;
            for (auto i = a.rbegin(); i != a.rend(); ++i)
            {
                res.push_back(*i->begin());
                i->erase(i->begin());
            }
        }

        for (int i : res)
            cout << i << " ";
        cout << endl;
    }