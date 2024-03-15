#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S, a, b;
    int N;
    cin >> N;
    cin >> S;
    N /= 2;
    a = S.substr(0, N);
    b = S.substr(N);
    if (a == b)
    {
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;

    return 0;
}