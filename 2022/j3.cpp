#include <iostream>
#include <cstring>
#include <bits/stdc++.h>
#include <istream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        if (s[i] >= 'A' || s[i] <= 'Z')
        {
            if (isdigit(s[i]))
            {
                cout << s[i];
                int n = i;
                while (n < 4)
                {
                    if (isdigit(s[n+1]))
                    {
                        cout << s[n+1];
                        n++;
                    } else
                    {
                        cout << "THIS CODE SUCKS \n";
                        break;
                    }
                    
                }
            } else if (s[i+1] == '+' || s[i+1] == '-')
            {
                cout << " ";
                if (s[i+1] == '+')
                {
                    cout << "tighten ";
                    i++;
                } else if (s[i+1] == '-')
                {
                    cout << "loosen ";
                    i++;
                }
                
            } else
            {
                cout << s[i];
            }
        }
    }
    

}