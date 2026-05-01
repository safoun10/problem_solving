#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;
    for (int t = 0; t < limit; t++)
    {
        int a, b;
        cin >> a >> b;

        if ((a % 2 != 0) && (b % 2 != 0))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}