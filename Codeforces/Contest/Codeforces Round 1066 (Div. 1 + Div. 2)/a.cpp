#include <bits/stdc++.h>
using namespace std;

int main()
{
    int times;
    cin >> times;

    for (int i = 0; i < times; i++)
    {
        int limit;
        cin >> limit;

        int *num_arr = new int[limit + 1]();
        int *array = new int[limit];

        for (int i = 0; i < limit; i++)
        {
            cin >> array[i];
            num_arr[array[i]]++;
        }

        int wrong = num_arr[0];

        for (int i = 1; i <= limit; i++)
        {
            if (num_arr[i] != 0)
            {
                if (num_arr[i] >= i)
                {
                    int extra = num_arr[i] - i;
                    wrong += extra;
                }
                else
                {
                    wrong += num_arr[i];
                }
            }
        }

        cout << wrong;
        cout << endl;

        delete[] num_arr;
        delete[] array;
    }
    return 0;
}
