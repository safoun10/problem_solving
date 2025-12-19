#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;
    for (int i = 0; i < limit; i++)
    {
        string num;
        int it, no, zero_count = 0;
        int sleep = 0;

        cin >> it >> no;
        cin >> num;

        for (int i = 0; i < it; i++)
        {
            if (num[i] == '1')
            {
                sleep = no;
            }
            else if (sleep > 0)
            {
                sleep--;
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