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

        int equal = a / (b + 1);
        cout << (a - equal * b) << endl;
    }
    return 0;
}
