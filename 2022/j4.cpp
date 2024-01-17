// currently working on it

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin >> x;
    vector<string>good(2);
    for (int i = 0; i < x; ++i)
    {
        string a, b;
        cin >> a >> b;
        good.push_back(a);
        good.push_back(b);
    }
    int y;
    cin >> y;
    vector<string>baddies(2);
    for (int i = 0; i < y; ++i)
    {
        string a, b;
        cin >> a >> b;
        baddies.push_back(a);
        baddies.push_back(b);
    }
    int g;
    cin >> g;
    vector<string>groups(3);
    for (int i = 0; i < g; ++i)
    {
        string a, b, c;
        cin >> a >> b >> c;
        groups.push_back(a);
        groups.push_back(b);
        groups.push_back(c);
    }
    int ans = 0;
    for (int i = 0; i < g; ++i)
    {
        for (int j = 0; j < x; j++)
        {
            if ((good[j]).find(groups[i]))
            {
                ans++;
                j++;
            }
        }
    }
    for (int i = 0; i < g; ++i)
    {
        for (int j = 0; j < y; ++j)
        {
            if ((baddies[j]).find(groups[i]))
            {
            ans++;
            j++;
            }
        }
    }

    cout << ans << endl;
}