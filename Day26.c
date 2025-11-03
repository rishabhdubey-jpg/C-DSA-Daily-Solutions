// Count and say problem.

#include <stdio.h>
#include <string.h>
void main() {
    char str[100], result[200];
    int i, count = 1, j = 0;
    printf("Enter a numeric string: ");
    gets(str);
    for (i = 0; i < strlen(str); i++) {
        if (str[i] == str[i + 1]) {
            count++;
        } else {
            result[j++] = count + '0';
            result[j++] = str[i];
            count = 1;
        }
    }
    result[j] = '\0';
    printf("Count and Say output: %s\n", result);
}