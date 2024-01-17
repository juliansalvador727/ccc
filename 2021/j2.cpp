#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    string person;
    while (n--)
    {
        string s; int x;
        cin >> s >> x;
        if (x > ans)
        {
            ans = x;
            person = s;
        }
    }
    cout << person << endl;
}