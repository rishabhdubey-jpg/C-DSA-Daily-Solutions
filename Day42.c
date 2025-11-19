// Print diagonals of a matrix.

#include <stdio.h>
int main()
{
    int a[10][10], n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nFirst Diagonal: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i][i]);
    }
    printf("\nSecond Diagonal: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i][n - i - 1]);
    }
    return 0;
}