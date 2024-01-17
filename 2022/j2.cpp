#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, starPlayers=0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int a, b;
        cin >> a >> b;
        if (((a*5)-(b*3))>40)
        {
            starPlayers++;
        }
    }

    cout << starPlayers << ( (starPlayers == n) ? "+" : "");
}