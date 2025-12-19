#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;
    for (int t = 0; t < limit; t++)
    {
        int alice[3];
        int bob[3];

        for (int i = 0; i < 3; i++)
        {
            cin >> alice[i];
        }
        for (int i = 0; i < 3; i++)
        {
            cin >> bob[i];
        }

        sort(alice, alice + 3, greater<int>());
        sort(bob, bob + 3, greater<int>());

        int alice_num = (alice[0] * 100) + (alice[1] * 10) + (alice[2]);
        int bob_num = (bob[0] * 100) + (bob[1] * 10) + (bob[2]);

        if (alice_num > bob_num)
        {
            cout << "Alice" << endl;
        }
        else if (alice_num < bob_num)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Tie" << endl;
        }
    }
    return 0;
}