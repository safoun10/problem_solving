#include <bits/stdc++.h>
using namespace std;

int main()
{

    int limit;
    if (!(cin >> limit))
        return 0;

    for (int t = 0; t < limit; t++)
    {
        int count;
        cin >> count;

        vector<string> strings(count);
        for (int i = 0; i < count; i++)
        {
            cin >> strings[i];
        }

        sort(strings.begin(), strings.end());

        string result = "";
        for (const string &s : strings)
        {
            result += s;
        }
        cout << result << endl;
    }
    return 0;
}