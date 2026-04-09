#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;
    for (int t = 0; t < limit; t++)
    {
        int count, special, sum = 0;
        cin >> count >> special;

        for (int i = 0; i < count; i++)
        {
            int num;
            cin >> num;
            sum += num;
        }

        if (sum % 2 != 0)
        {
            cout << "YES" << endl;
        }
        else if ((count * special) % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}