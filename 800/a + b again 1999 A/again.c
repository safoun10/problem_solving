#include <stdio.h>

int main()
{
    int limit, input, first, second;
    scanf("%d", &limit);

    for (int i = 1; i <= limit; i++)
    {
        scanf("%d", &input);
        first = input / 10;
        second = input % 10;
        printf("%d\n", first + second);
    }

    return 0;
}