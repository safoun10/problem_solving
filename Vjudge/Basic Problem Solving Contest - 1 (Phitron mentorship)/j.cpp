#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;
    for (int i = 0; i < limit; i++)
    {
        string num;

        int it, zero_count = 0;

        int turn = 0;

        cin >> it;
        cin >> num;

        for (int i = 0; i < it; i++)
        {
            if (num[i] == '1')
            {
                turn = 1;
            }
            else if (turn > 0)
            {
                continue;
            }
            else if (num[i] == '0')
            {
                zero_count++;
            }
        }
        cout << zero_count << endl;
    }

    return 0;
}