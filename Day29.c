// Implement strstr() (substring search).

#include <stdio.h>
int myStrStr(char str[], char sub[])
{
    int i, j;
    for (i = 0; str[i] != '\0'; i++)
    {
        j = 0;
        while (str[i + j] != '\0' && sub[j] != '\0' && str[i + j] == sub[j])
        {
            j++;
        }
        if (sub[j] == '\0')
        {
            return i; // starting index of substring
        }
    }
    return -1; // this condition will check for ... not found
}

int main()
{
    char str[100], sub[100];
    int index;
    printf("Enter main string: ");
    gets(str);
    printf("Enter substring: ");
    gets(sub);
    index = myStrStr(str, sub);
    if (index != -1)
        printf("Substring found at index %d\n", index);
    else
        printf("Substring not found\n");
    return 0;
}