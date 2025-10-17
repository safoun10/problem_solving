#include <stdio.h>

int main()
{
    int limit, first, second;
    scanf("%d", &limit);

    for (int i = 1; i <= limit; i++)
    {
        scanf("%d %d", &first, &second);

        if (first <= second)
        {
            printf("%d %d\n", first, second);
        }
        else if (first > second)
        {
            printf("%d %d\n", second, first);
        }
    }

    return 0;
}