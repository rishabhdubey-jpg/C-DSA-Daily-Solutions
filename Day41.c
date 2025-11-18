// Set entire row and column to 0 if any element is 0.

#include <stdio.h>
int main()
{
    int a[10][10], r[10] = {0}, c[10] = {0};
    int n, m;
    printf("Enter rows and columns: ");
    scanf("%d %d", &n, &m);
    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
            if (a[i][j] == 0)
            {
                r[i] = 1;  
                c[j] = 1;  
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (r[i] == 1)
        {
            for (int j = 0; j < m; j++)
                a[i][j] = 0;
        }
    }
    for (int j = 0; j < m; j++)
    {
        if (c[j] == 1)
        {
            for (int i = 0; i < n; i++)
                a[i][j] = 0;
        }
    }
    printf("\nMatrix after setting rows/columns to 0:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
