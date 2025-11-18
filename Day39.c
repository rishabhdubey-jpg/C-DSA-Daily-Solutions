// Spiral traversal of a matrix.

#include <stdio.h>
int main()
{
    int a[10][10], n, m;
    int top, bottom, left, right;
    printf("Enter rows and columns : ");
    scanf("%d %d", &n, &m);
    printf("Enter matrix elements :\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    top = 0;
    bottom = n - 1;
    left = 0;
    right = m - 1;
    printf("Spiral Traversal: ");
    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
            printf("%d ", a[top][i]);
        top++;

        for (int i = top; i <= bottom; i++)
            printf("%d ", a[i][right]);
        right--;

        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
                printf("%d ", a[bottom][i]);
            bottom--;
        }

        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
                printf("%d ", a[i][left]);
            left++;
        }
    }
    return 0;
}