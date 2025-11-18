//  Matrix multiplication.

#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], c[10][10];
    int n1, n2, m1, m2;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &n1, &m1);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &n2, &m2);
    if (m1 != n2)
    {
        printf("Matrix multiplication not possible!\n");
        return 0;
    }
    printf("Enter first matrix elements:\n");
    for (int i = 0; i < n1; i++)
        for (int j = 0; j < m1; j++)
            scanf("%d", &a[i][j]);
    printf("Enter second matrix elements:\n");
    for (int i = 0; i < n2; i++)
        for (int j = 0; j < m2; j++)
            scanf("%d", &b[i][j]);
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < m1; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("Resultant Matrix:\n");
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m2; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }
    return 0;
}