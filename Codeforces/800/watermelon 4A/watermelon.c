#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    if (num == 2 || num % 2 != 0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    return 0;
}