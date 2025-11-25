// Find median in a row-wise sorted matrix.

#include <stdio.h>
int countLessEqual(int row[], int c, int mid)
{
    int l = 0, r = c - 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (row[m] <= mid)
            l = m + 1;
        else
            r = m - 1;
    }
    return l;
}
int main()
{
    int a[10][10], r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter row-wise sorted matrix:\n");
    int min = 100000, max = -100000;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
            if (a[i][0] < min)
                min = a[i][0];
            if (a[i][c - 1] > max)
                max = a[i][c - 1];
        }
    }
    int desired = (r * c + 1) / 2;  
    while (min < max)
    {
        int mid = (min + max) / 2;
        int count = 0;

        for (int i = 0; i < r; i++)
            count += countLessEqual(a[i], c, mid);

        if (count < desired)
            min = mid + 1;
        else
            max = mid;
    }
    printf("Median of the matrix = %d\n", min);
    return 0;
}
