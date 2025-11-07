// Valid Palindrome after removing at most one character.

#include <stdio.h>
#include <string.h>
int isPalindrome(char s[], int left, int right)
{
    while (left < right)
    {
        if (s[left] != s[right])
            return 0;
        left++;
        right--;
    }
    return 1;
}
int validPalindrome(char s[])
{
    int left = 0, right = strlen(s) - 1;

    while (left < right)
    {
        if (s[left] != s[right])
        {
            return isPalindrome(s, left + 1, right) ||
                   isPalindrome(s, left, right - 1);
        }
        left++;
        right--;
    }
    return 1;
}
int main()
{
    char s[50];
    printf("Enter a string: ");
    gets(s);
    if (validPalindrome(s))
        printf("It can be a valid palindrome.\n");
    else
        printf("It cannot be a valid palindrome.\n");
    return 0;
}