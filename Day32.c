// Longest substring without repeating characters.

#include <stdio.h>
#include <string.h>
int main()
{
    char str[200];
    int lastIndex[256];
    int i, start = 0, maxLen = 0, currLen = 0;
    printf("Enter a string: ");
    gets(str);
    for (i = 0; i < 256; i++)
        lastIndex[i] = -1;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (lastIndex[(unsigned char)str[i]] >= start)
        {
            start = lastIndex[(unsigned char)str[i]] + 1;
        }
        lastIndex[(unsigned char)str[i]] = i;
        currLen = i - start + 1;
        if (currLen > maxLen)
            maxLen = currLen;
    }
    printf("Length of longest substring without repeating characters is %d\n", maxLen);
    return 0;
}