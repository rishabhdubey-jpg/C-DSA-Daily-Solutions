// Boolean Matrix problem. (set row/column to 1 if any element is 1)
#include <stdio.h>
int main()
{
    int a[10][10], row[10] = {0}, col[10] = {0};
    int n, m;
    printf("Enter rows and columns: ");
    scanf("%d %d", &n, &m);
    printf("Enter matrix elements (0/1):\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
            if (a[i][j] == 1)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (row[i] == 1 || col[j] == 1)
            {
                a[i][j] = 1;
            }
        }
    }
    printf("\nMatrix after modification:\n");
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