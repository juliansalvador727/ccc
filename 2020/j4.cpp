#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string t, s; cin >> t >> s;
    bool found = false;

    for (int i = 0; i < s.length(); ++i)
    {
        if (t.find(s) != string::npos)
        {
            found = true;
            break;
        
        }
        string newString = s.substr(1,s.size()-1) + s[0];
        s = newString;
    }
    if (found)
        {
            cout << "yes" << endl;
        } else
        {
            cout << "no" << endl;
        }
}