#include <stdio.h>

int main()
{
    int limit, k, a, b, x, y, remaining_temp, second_dish_portion, first_dish_portion, total_dish_count;
    scanf("%d", &limit);

    for (int i = 1; i <= limit; i++)
    {
        scanf("%d %d %d %d %d", &k, &a, &b, &x, &y);

        if (k < a && k < b)
        {
            total_dish_count = 0;
            printf("%d\n", total_dish_count);
        }
        else if (k >= a && k < b)
        {
            total_dish_count = ((k - a) / x) + 1;
            printf("%d\n", total_dish_count);
        }
        else if (k < a && k >= b)
        {
            total_dish_count = ((k - b) / y) + 1;
            printf("%d\n", total_dish_count);
        }

        else if (x > y)
        {
            second_dish_portion = ((k - b) / y) + 1;
            remaining_temp = k - (second_dish_portion * y);

            if (remaining_temp < a)
            {
                total_dish_count = second_dish_portion;
            }
            else
            {
                first_dish_portion = ((remaining_temp - a) / x) + 1;

                total_dish_count = first_dish_portion + second_dish_portion;
            }

            printf("%d\n", total_dish_count);
        }
        else if (x <= y)
        {
            first_dish_portion = ((k - a) / x) + 1;
            remaining_temp = k - (first_dish_portion * x);

            if (remaining_temp < b)
            {
                total_dish_count = first_dish_portion;
            }
            else
            {
                second_dish_portion = ((remaining_temp - b) / y) + 1;
                total_dish_count = first_dish_portion + second_dish_portion;
            }

            printf("%d\n", total_dish_count);
        }
    }
    return 0;
}