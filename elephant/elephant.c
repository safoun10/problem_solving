#include <stdio.h>

int main()
{
    int i, input, result;
    scanf("%d", &input);

    if (input > 5)
    {
        if (input % 5 == 0)
        {
            result = input / 5;
            printf("%d", result);
        }
        else
        {
            result = (input / 5) + 1;
            printf("%d", result);
        }
    }
    else
    {
        result = 1;
        printf("%d", result);
    }
    return 0;
}