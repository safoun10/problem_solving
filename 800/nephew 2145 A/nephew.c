#include <stdio.h>

int main()
{
    int limit, candy, need, result;
    scanf("%d", &limit);

    for (int i = 1; i <= limit; i++)
    {
        scanf("%d", &candy);
        need = candy % 3;
        if (need == 0)
        {
            result = 0;
        }
        else
        {
            result = 3 - need;
        }
        printf("%d\n", result);
    }
    return 0;
}