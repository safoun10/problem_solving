#include <stdio.h>

int main()
{
    int limit;
    char word[100], first, second;
    scanf("%d", &limit);
    getchar();

    for (int i = 1; i <= limit; i++)
    {
        fgets(word, sizeof(word), stdin);
        first = word[0];
        second = word[4];

        word[0] = second;
        word[4] = first;

        printf("%s", word);
    }

    return 0;
}