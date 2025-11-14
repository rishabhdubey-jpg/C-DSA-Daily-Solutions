// Check if one string is a subsequence of another.

#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    int i = 0, j = 0;
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    while (str1[i] != '\0' && str2[j] != '\0')
    {
        if (str1[i] == str2[j])
            j++;
        i++;
    }
    if (str2[j] == '\0')
        printf("Yes, second string is a subsequence of first string.\n");
    else
        printf("No, it is not a subsequence.\n");
    return 0;
}