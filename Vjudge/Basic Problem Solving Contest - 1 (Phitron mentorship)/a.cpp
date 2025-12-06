#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    if (((2 * a) + b) == ((2 * x) + y))
    {
        cout << "Equal" << endl;
    }
    else if (((2 * a) + b) > ((2 * x) + y))
    {
        cout << "Messi" << endl;
    }
    else
    {
        cout << "Ronaldo" << endl;
    }

    return 0;
}