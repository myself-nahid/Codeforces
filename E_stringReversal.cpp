#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void reverseStr(string &str)
{
    int n = str.length();

    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

int main()
{
    int n;
    cin >> n;
    // string s;
    // cin >> s;

    string str = "geeksforgeeks";
    reverseStr(str);
    //cout << str;
    return 0;
}