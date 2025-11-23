// Search a 2D matrix.

#include <stdio.h>
int main()
{
    int a[10][10], n, m, target;
    printf("Enter rows and columns: ");
    scanf("%d %d", &n, &m);
    printf("Enter matrix elements (sorted as per problem):\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    printf("Enter target element to search: ");
    scanf("%d", &target);
    int left = 0, right = n * m - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        int row = mid / n;
        int col = mid % m;
        if (a[row][col] == target)
        {
            printf("Element found at (%d, %d)\n", row, col);
            return 0;
        }
        else if (a[row][col] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    printf("Element not found.\n");
    return 0;
}