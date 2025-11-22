// Pascal's Triangle.

#include <stdio.h>
int fact(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
        f = f * i;
    return f;
}
int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
int main()
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Pascal's Triangle:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int s = 0; s < rows - i - 1; s++)
            printf(" ");
        for (int j = 0; j <= i; j++)
            printf("%d ", nCr(i, j));
        printf("\n");
    }
    return 0;
}