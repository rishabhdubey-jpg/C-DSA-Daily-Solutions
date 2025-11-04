// Longest common prefix.

#include <stdio.h>
#include <string.h>
int main()
{
    int n, i, j;
    char str[10][100], prefix[100];
    printf("Enter number of strings: ");
    scanf("%d", &n);
    getchar();
    printf("Enter %d strings:\n", n);
    for (i = 0; i < n; i++)
    {
        gets(str[i]);
    }
    strcpy(prefix, str[0]);
    for (i = 1; i < n; i++)
    {
        j = 0;
        while (prefix[j] && str[i][j] && prefix[j] == str[i][j])
        {
            j++;
        }
        prefix[j] = '\0';
    }
    if (strlen(prefix) == 0)
        printf("No common prefix found.\n");
    else
        printf("Longest Common Prefix: %s\n", prefix);
    return 0;
}