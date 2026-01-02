#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int val = abs(a - b);
    if (val <= c)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}