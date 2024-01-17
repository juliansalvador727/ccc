#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string ld="";
    while (1>0)
    {
        string s;
        cin >> s;
        if (s=="99999")
        {
            break;
        }
        if (((s[0] + s[1]) % 2 == 0) && s[0]+s[1] != 0)
        {
            cout << "right" << " ";
            ld = "right";
        } else if ((s[0] + s[1]) % 2 == 1)
        {
            cout << "left" << " ";
            ld = "left";
        } else
        {
            cout << ld << " ";
        }
        cout << s[2] << s[3] << s[4] << endl;

    }
}