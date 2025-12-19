#include <stdio.h>
#include <string.h>

int main()
{
    int limit, a, b, c, d;
    scanf("%d", &limit);
    for (int i = 1; i <= limit; i++)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if (a == b && a == c && a == d)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }

    return 0;
}