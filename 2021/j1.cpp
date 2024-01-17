#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int b;
    cin >> b;

    cout << 5 * b - 400 << endl << ((5 * b - 400 < 100) ? "1" : ((5 * b - 400 > 100) ? "-1" : "0"));

}