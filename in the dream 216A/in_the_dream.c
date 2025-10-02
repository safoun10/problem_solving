#include <stdio.h>

int main()
{
    float limit, a, b, c, d;
    scanf("%f", &limit);
    for (int i = 1; i <= limit; i++)
    {
        scanf("%f %f %f %f", &a, &b, &c, &d);
        if ((a / 2) - 1 > b || (b / 2) - 1 > a)
        {
            printf("no");
        }
        else
        {
            if (((c - a) / 2) - 1 > (d - b) || ((d - b) / 2) - 1 > (c - a))
            {
                printf("no");
            }
            else
            {
                printf("yes");
            }
        }
    }
    
    return 0;
}