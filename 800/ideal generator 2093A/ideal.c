#include <stdio.h>

int main()
{
    int limit, number;
    scanf("%d", &limit);

    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &number);
        if (number % 2 == 0)
        {
            printf("no\n");
        }
        else
        {
            printf("yes\n");
        }
    }
    return 0;
}