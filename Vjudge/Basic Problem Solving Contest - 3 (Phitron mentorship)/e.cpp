#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a > b)
    {
        cout << "New";
    }
    else if (a == b)
    {
        cout << "Same";
    }
    else
    {
        cout << "Old";
    }

    return 0;
}