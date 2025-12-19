#include <stdio.h>
#include <string.h>

int main()
{
    int limit;
    scanf("%d", &limit);

    for (int i = 1; i <= limit; i++)
    {
        int not_needed;
        scanf("%d", &not_needed);
        char b_word[10001];
        char g_word[10001];

        int b_count[27] = {0};
        int g_count[27] = {0};

        int mismatch = 0;

        scanf("%s %s", b_word, g_word);

        for (int i = 0; i < strlen(b_word); i++)
        {
            b_count[b_word[i] - 97]++;
        }

        for (int i = 0; i < strlen(g_word); i++)
        {
            g_count[g_word[i] - 97]++;
        }

        for (int i = 0; i < 26; i++)
        {

            if (b_count[i] != g_count[i])
            {
                mismatch++;
            }
        }

        if (mismatch == 0)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }

        mismatch = 0;

        for (int i = 0; i < 26; i++)
        {
            b_count[i] = 0;
            g_count[i] = 0;
            b_word[i] = 0;
            g_word[i] = 0;
        }
    }

    return 0;
}