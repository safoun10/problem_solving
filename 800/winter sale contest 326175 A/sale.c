#include <stdio.h>

int main()
{
    int percentage, price;
    float previous, per_suf;

    scanf("%d %d", &percentage, &price);
    per_suf = (100 - percentage) / 100.0;
    previous = price / per_suf;

    printf("%.2f", previous);

    return 0;
}