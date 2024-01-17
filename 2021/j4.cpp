#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int large = count(s.begin(), s.end(), 'L');
    int medium = count(s.begin(), s.end(), 'M');
    
    int notLarge = 0;
    for (int i = 0; i < large; ++i)
    {
        notLarge += (s[i] != 'L');
    } 
    int notMedium = 0;
    for (int i = large; i < large + medium; ++i)
    {
        notMedium += (s[i] != 'M');
    }
    int mediumInLarge = 0;
    for (int i = 0; i < large; ++i)
    {
        mediumInLarge += (s[i] == 'M');
    }
    int largeInMedium = 0;
    for (int i = large; i < large + medium; ++i)
    {
        largeInMedium += (s[i] == 'L');
    }

    cout << notLarge + notMedium - min(mediumInLarge, largeInMedium) << endl;
    return 0;
}

// L L M S M L

// L L M S L M

// L L M L S M

// L L L M S M

// L L L M M S

// L M S L M S L M S L L

// 5 larges

// L M S L M 

// 3 not large?