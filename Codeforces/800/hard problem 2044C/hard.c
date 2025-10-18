#include <stdio.h>

int main()
{
    int limit, m, a, b, c, max, first_row_seated, second_row_seated, available_seat, extra_seating, result_total;
    scanf("%d", &limit);

    for (int i = 0; i < limit; i++)
    {
        scanf("%d %d %d %d", &m, &a, &b, &c);
        max = m * 2;

        if (m <= a)
        {
            first_row_seated = m;
        }
        else
        {
            first_row_seated = a;
        }

        if (m <= b)
        {
            second_row_seated = m;
        }
        else
        {
            second_row_seated = b;
        }

        available_seat = max - (first_row_seated + second_row_seated);

        if (available_seat <= c)
        {
            extra_seating = available_seat;
        }
        else
        {
            extra_seating = c;
        }

        result_total = first_row_seated + second_row_seated + extra_seating;
        printf("%d\n", result_total);
    }
    
    return 0;
}