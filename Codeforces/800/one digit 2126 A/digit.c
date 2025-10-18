#include <stdio.h>

int main()
{
    int limit, num, check, result = 10;
    scanf("%d", &limit);
    for (int i = 1; i <= limit; i++)
    {
        scanf("%d", &num);
        while (num > 0)
        {
            check = num % 10;
            if (check == 0)
            {
                result = 0;
                break;
            }
            else if (check < result)
            {
                result = check;
            }
            num /= 10;
        }
        printf("%d\n", result);
        result = 10;
    }

    return 0;
}