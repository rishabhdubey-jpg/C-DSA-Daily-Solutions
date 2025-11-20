// Snake pattern printing.

#include <stdio.h>
int main()
{
    int a[10][10], n, m;
    printf("Enter rows and columns: ");
    scanf("%d %d", &n, &m);
    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nSnake Pattern: ");

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < m; j++)
                printf("%d ", a[i][j]);
        }
        else
        {
            for (int j = m - 1; j >= 0; j--)
                printf("%d ", a[i][j]);
        }
    }
    return 0;
}