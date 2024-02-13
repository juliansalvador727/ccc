#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    bool Rcommands[m+1], Ccommands[n+1];
    for (int x = 1; x <= m; ++x)
    {
        Rcommands[x] = false;
    }
    for (int y = 1; y <= n; ++y)
    {
        Ccommands[y] = false;
    }

    int k;
    cin >> k;

    char letter;
    int number;
    for (int i = 0; i < k; ++i)
    {
        cin >> letter >> number;

        if (letter == 'R')
        {
            Rcommands[number] = !Rcommands[number];
        }
        else
        {
            Ccommands[number] = !Ccommands[number];
        }

    }

    bool grid[m+1][n+1];

    for (int x = 1; x <= m; x++)
    {
        for (int y = 1; y <= n; y++)
        {
            grid[x][y] = false;
        }
    }

    for (int x = 1; x <= m; x++)
    {
        if (Rcommands[x]){
            for (int y = 1; y<=n; y++)
            {
                grid[x][y] = !grid[x][y];
            }
        }
    }

    for (int y = 1; y <= n; y++)
    {
        if (Ccommands[y])
        {
            for (int x = 1; x <= m; x++)
            {
                grid[x][y] = !grid[x][y];
            }
        }
    }
    int gCount = 0;
    for (int x = 1; x <= m; x++)
    {
        for (int y = 1; y <= n; y++)
        {
            if (grid[x][y])
            gCount++;
        }
    }

    cout << gCount << endl;

    return 0;
}