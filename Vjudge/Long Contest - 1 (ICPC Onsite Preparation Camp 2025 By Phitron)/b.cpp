#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;
    for (int t = 0; t < limit; t++)
    {
        string a;
        int count = 0;
        cin >> a;
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == '1')
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}