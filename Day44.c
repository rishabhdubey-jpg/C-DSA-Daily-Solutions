// Boundary traversal of matrix.

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
    printf("\nBoundary Traversal: ");
    for (int j = 0; j < m; j++)
        printf("%d ", a[0][j]);
    for (int i = 1; i < n; i++)
        printf("%d ", a[i][m - 1]);
    if (n > 1)
    {
        for (int j = m - 2; j >= 0; j--)
            printf("%d ", a[n - 1][j]);
    }
    if (m > 1)
    {
        for (int i = n - 2; i > 0; i--)
            printf("%d ", a[i][0]);
    }
    return 0;
}