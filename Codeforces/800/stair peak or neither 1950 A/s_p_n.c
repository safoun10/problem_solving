#include <stdio.h>

int main()
{
    int limit, a, b, c;
    scanf("%d", &limit);

    for (int i = 1; i <= limit; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        if (a < b && b < c)
        {
            printf("STAIR\n");
        }
        else if (a < b && b > c)
        {
            printf("PEAK\n");
        }
        else
        {
            printf("NONE\n");
        }
    }

    return 0;
}