#include <stdio.h>

int main()
{
    int limit, a, b;
    scanf("%d", &limit);

    for (int i = 1; i <= limit; i++)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", b - a);
    }
    return 0;
}