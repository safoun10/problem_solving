#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int j = 1; j <= n; j++)
    {
        int limit;
        scanf("%d", &limit);
        char text[101];
        scanf("%s", text);

        int times = 0;

        for (int i = 0; i < limit; i++)
        {
            if (text[i] != text[limit - 1])
            {
                times++;
            }
        }

        printf("%d\n", times);
    }

    return 0;
}