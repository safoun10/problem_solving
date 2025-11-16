#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int a, b, c;
    int *max, *min;
    int mid;
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
    {
        max = &a;
    }
    else if (b >= a && b >= c)
    {
        max = &b;
    }
    else
    {
        max = &c;
    }

    if (a <= b && a <= c)
    {
        min = &a;
    }
    else if (b <= a && b <= c)
    {
        min = &b;
    }
    else
    {
        min = &c;
    }

    if ((&a == min && &b == max) || (&a == max && &b == min))
    {
        mid = c;
    }
    else if ((&a == min && &c == max) || (&a == max && &c == min))
    {
        mid = b;
    }
    else
    {
        mid = a;
    }

    if (*max - *min >= 10)
    {
        printf("check again");
    }
    else
    {
        printf("final %d", mid);
    }

    return 0;
}