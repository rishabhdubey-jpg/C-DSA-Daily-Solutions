//  Check if a string is a rotation of another string.

#include <stdio.h>
#include <string.h>
int isRotation(char s1[], char s2[])
{
    char temp[200];
    if (strlen(s1) != strlen(s2))
        return 0;
    strcpy(temp, s1);
    strcat(temp, s1);
    if (strstr(temp, s2) != NULL)
        return 1;
    return 0;
}
int main()
{
    char s1[100], s2[100];
    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);
    if (isRotation(s1, s2))
        printf("YES, it is a rotation.\n");
    else
        printf("NO, it is not a rotation.\n");
    return 0;
}