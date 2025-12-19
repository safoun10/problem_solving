    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        int limit;
        cin >> limit;
        for (int t = 0; t < limit; t++)
        {
            float a, b, c;
            cin >> a >> b >> c;

            if ((a * b) / 2 < c)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        return 0;
    }