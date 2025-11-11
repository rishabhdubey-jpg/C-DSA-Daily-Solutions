//  Group anagrams together.

#include <stdio.h>
#include <string.h>
void sortString(char *str)
{
    int i, j;
    char temp;
    int n = strlen(str);
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (str[i] > str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}
int main()
{
    int n, i, j;
    char words[20][50], sorted[20][50];
    int visited[20] = {0};
    printf("Enter number of words: ");
    scanf("%d", &n);
    printf("Enter %d words:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", words[i]);
        strcpy(sorted[i], words[i]);
        sortString(sorted[i]);
    }
    printf("\nGrouped Anagrams:\n");
    for (i = 0; i < n; i++)
    {
        if (visited[i])
            continue;
        printf("{ %s", words[i]);
        visited[i] = 1;
        for (j = i + 1; j < n; j++)
        {
            if (!visited[j] && strcmp(sorted[i], sorted[j]) == 0)
            {
                printf(", %s", words[j]);
                visited[j] = 1;
            }
        }
        printf(" }\n");
    }
    return 0;
}