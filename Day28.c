// Convert string to integer (like atoi).

#include <stdio.h>
int main()
{
    char str[100];
    int i, num = 0, sign = 1;
    printf("Enter a numeric string: ");
    gets(str);
    
    // Checking for the negative sign
    if (str[0] == '-')
    {
        sign = -1;
        i = 1;
    }
    else
    {
        i = 0;
    }

    // Converting string to an integer
    for (; str[i] != '\0'; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            num = num * 10 + (str[i] - '0');
        }
        else
        {
            break;
        }
    }
    num = num * sign;
    printf("Converted integer: %d\n", num);
    return 0;
}
