#include <stdio.h>

int main()
{
    int limit, a, b;
    scanf("%d", &limit);

    for (int i = 1; i <= limit; i++)
    {
        scanf("%d %d", &a, &b);

        if ((a % b == 0 || b % a == 0) && a != b)
        {
            printf("1\n");
        }
        else if (a == b)
        {
            printf("0\n");
        }
        else
        {
            printf("2\n");
        }
    }
    return 0;
}