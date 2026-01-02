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

        int ans = max(0, 2 * (b - a));
        cout << ans << endl;
    }
    return 0;
}
