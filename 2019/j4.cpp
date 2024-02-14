#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int arr[4] = {1, 2, 3, 4};

    string s;
    cin >> s;
    for (int i = 0; i < s.length(); ++i)
    {
        int temp = 0;
        if (s[i]=='H')
        {
            temp = arr[0];
            arr[0] = arr[2];
            arr[2] = temp;
            temp = arr[1];
            arr[1] = arr[3];
            arr[3] = temp;
        } else
        {
            temp = arr[0];
            arr[0] = arr[1];
            arr[1] = temp;
            temp = arr[2];
            arr[2] = arr[3];
            arr[3] = temp;
        }
    }

    cout << arr[0] << " " << arr[1] << endl << arr[2] << " " << arr[3];
}