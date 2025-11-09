// Compress the string.

#include <stdio.h>
#include <string.h>
int main()
{
    char str[200], result[400];
    int i, count, k = 0;
    printf("Enter a string: ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        count = 1;
        while (str[i] == str[i + 1])
        {
            count++;
            i++;
        }
        result[k++] = str[i];
        result[k++] = count + '0';
    }
    result[k] = '\0';
    printf("Compressed string: %s\n", result);
    return 0;
}