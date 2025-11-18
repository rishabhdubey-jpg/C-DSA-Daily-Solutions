// Search in a row-wise and column-wise sorted matrix

#include <stdio.h>
int main()
{
    int n, m, key;
    printf("Enter rows and columns: ");
    scanf("%d %d", &n, &m);
    int a[10][10];
    printf("Enter matrix elements (sorted row and columns):\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the element to search : ");
    scanf("%d", &key);
    int i = 0, j = m - 1;
    while (i < n && j >= 0)
    {
        if (a[i][j] == key)
        {
            printf("Element found at position (%d, %d)\n", i, j);
            return 0;
        }
        else if (a[i][j] > key)
            j--;
        else
            i++;
    }
    printf("Element not found!\n");
    return 0;
}