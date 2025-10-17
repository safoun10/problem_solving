#include <stdio.h>

int main()
{
    int limit, x, n;
    scanf("%d", &limit);

    for (int i = 0; i < limit; i++)
    {
        scanf("%d %d", &x, &n);
        if (n % 2 == 0)
        {
            printf("0\n");
        }
        else
        {
            printf("%d\n", x);
        }
    }
    return 0;
}