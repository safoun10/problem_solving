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
        if (a - b >= 0)
        {
            cout << a - b << endl;
        }
        else if (a - b < 0)
        {
            cout << 0 << endl;
        }
    }
    return 0;
}