#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;
    for (int t = 0; t < limit; t++)
    {
        int more, total;
        cin >> more >> total;
        cout << ((total - more) / 2) + more << " " << total - (((total - more) / 2) + more) << endl;
    }
    return 0;
}