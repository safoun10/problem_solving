#include <stdio.h>

int main()
{
    unsigned long long int a, b, k;

    scanf("%llu %llu %llu", &a, &b, &k);
    if (a % k == 0 && b % k == 0)
    {
        printf("Both");
    }
    else if (a % k == 0 && b % k != 0)
    {
        printf("Memo");
    }
    else if (a % k != 0 && b % k == 0)
    {
        printf("Momo");
    }
    else if (a % k != 0 && b % k != 0)
    {
        printf("No One");
    }

    return 0;
}