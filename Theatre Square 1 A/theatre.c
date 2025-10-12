#include <stdio.h>

int main()
{
    long long a, b, c, a_times, a_extra, b_times, b_extra, total;
    scanf("%lld %lld %lld", &a, &b, &c);

    a_times = a / c;
    a_extra = a - (a_times * c);
    if (a_extra > 0)
    {
        a_times++;
    }

    b_times = b / c;
    b_extra = b - (b_times * c);
    if (b_extra > 0)
    {
        b_times++;
    }

    total = a_times * b_times;

    printf("%lld", total);

    return 0;
}