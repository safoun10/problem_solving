#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int limit;
    scanf("%d", &limit);

    for (int i = 0; i < limit; i++)
    {
        long long a, b, n;
        scanf("%lld %lld %lld", &a, &b, &n);

        if (b >= a)
        {
            printf("1\n");
        }
        else if (a >= b * n)
        {
            printf("1\n");
        }
        else
        {
            printf("2\n");
        }
    }

    return 0;
}