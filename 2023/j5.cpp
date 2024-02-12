#include <iostream>
#include <bits/stdc++.h>


using namespace std;

vector<string> a;
string w;
int r, c, ans;

void dfs(int d, int x, int y, int dx, int dy, bool turned = false){
    if (x < 0 || x >= r || y < 0 || y >= c) return;
    if (a[x][y] != w[d]) return;
    if (d == w.length() - 1)
    {
        ans++;
        return;
    }

    dfs(d+1, x+dx, y+dy, dx, dy, turned);
    if (!turned && d >=1 )
    {
        dfs(d + 1, x - dy, y + dx, -dy, dx, true);
        dfs(d + 1, x + dy, y - dx, dy, -dx, true);
    }


}

int main()
{
    cin >> w >> r >> c;
    for (int i = 0; i < r; ++i)
    {
        string grid = "";
        for (int j = 0; j < c; ++j)
        {
            char l;
            cin >> l;
            grid += l;
        }
        a.push_back(grid);
    }

    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            if (a[i][j] == w[0])
            {
                dfs(0, i, j, -1, -1);
                dfs(0, i, j, -1, 0);
                dfs(0, i, j, -1, 1);
                dfs(0, i, j, 0, -1);
                dfs(0, i, j, 0, 1);
                dfs(0, i, j, 1, -1);
                dfs(0, i, j, 1, 0);
                dfs(0, i, j, 1, 1);
            }
        }
    }
    cout << ans << endl;
}