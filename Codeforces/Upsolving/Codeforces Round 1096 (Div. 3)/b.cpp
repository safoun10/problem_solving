#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;
    for (int t = 0; t < limit; t++)
    {
        int a, l = 0, r = 0;
        string s;
        cin >> a >> s;
        for (char c : s)
        {
            (c == '(') ? l++ : r++;
        }
        cout << ((l == r) ? "YES" : "NO") << endl;
    }
    return 0;
}