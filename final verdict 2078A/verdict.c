#include <stdio.h>

int main()
{
    int limit, size, expected, found = 0;
    scanf("%d", &limit);

    for (int i = 0; i < limit; i++)
    {
        scanf("%d %d", &size, &expected);
        int array[size];
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &array[j]);
            found += array[j];
        }

        if (found == expected * size)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
        found = 0;
    }

    return 0;
}