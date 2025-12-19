#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;
    for (int t = 0; t < limit; t++)
    {
        float a, b;
        cin >> a >> b;

        int ans;
        if (ceil((b / 100) - a) > 0)
        {
            ans = ceil((b / 100) - a);
        }
        else
        {
            ans = 0;
        }

        cout << ans << endl;
    }
    return 0;
}

//safoun