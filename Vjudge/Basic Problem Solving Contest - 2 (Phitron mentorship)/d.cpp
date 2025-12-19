// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int limit;
//     cin >> limit;
//     for (int t = 0; t < limit; t++)
//     {
//         int n, a, b, least;
//         cin >> n >> a >> b;
//         for (int i = 0; i < n; i++)
//         {
//             int x, y, mini = INT_MAX;
//             cin >> x >> y;

//             if (abs((a + b) - (x - y)) < mini)
//             {
//                 mini = abs((a + b) - (x - y));
//             }
//             least = mini;
//         }
//         cout << least << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;
    for (int t = 0; t < limit; t++)
    {
        int n, a, b;
        cin >> n >> a >> b;

        int least = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;

            int mini = abs(a - x) + abs(b - y);

            if (mini < least)
            {
                least = mini;
            }
        }
        cout << least << endl;
    }
    return 0;
}
