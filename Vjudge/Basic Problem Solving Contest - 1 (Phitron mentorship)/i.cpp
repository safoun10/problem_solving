#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;
    for (int i = 0; i < limit; i++)
    {
        int a, b, c, total = 0;
        cin >> a >> b >> c;

        int rest = c - a;

        if (c < a)
        {
            total = c * 2;
        }
        else
        {
            if (rest >= 0)
            {
                total = (a * 2) + rest;
            }
            else
            {
                total = rest * 2;
            }
        }
        cout << total << endl;
    }
    return 0;
}