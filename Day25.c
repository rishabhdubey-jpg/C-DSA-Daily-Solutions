// Check if two strings are anagrams.

#include <stdio.h>
#include <string.h>
void main()
{
    char str1[100], str2[100];
    int i, j, len1, len2, found = 0, not_found = 0;
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    len1 = strlen(str1);
    len2 = strlen(str2);
    if (len1 != len2)
    {
        printf("Strings are not anagrams.\n");
        return;
    }
    for (i = 0; i < len1; i++)
    {
        found = 0;
        for (j = 0; j < len2; j++)
        {
            if (str1[i] == str2[j])
            {
                str2[j] = '0';
                found = 1;
                break;
            }
        }
        if (found == 0)
        {
            not_found = 1;
            break;
        }
    }
    if (not_found == 0)
        printf("Strings are anagrams.\n");
    else
        printf("Strings are not anagrams.\n");
}

