// Count islands (DFS on matrix).

#include <stdio.h>
int n, m;
int a[50][50];
int dirX[] = {-1, 1, 0, 0};
int dirY[] = {0, 0, -1, 1};
void dfs(int x, int y)
{
    a[x][y] = 0;
    for (int k = 0; k < 4; k++)
    {
        int nx = x + dirX[k];
        int ny = y + dirY[k];
        if (nx >= 0 && nx < n && ny >= 0 && ny < m && a[nx][ny] == 1)
        {
            dfs(nx, ny);
        }
    }
}
int main()
{
    int count = 0;
    printf("Enter rows and columns: ");
    scanf("%d %d", &n, &m);
    printf("Enter matrix (0 = water, 1 = land):\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 1)
            {
                count++;
                dfs(i, j);
            }
        }
    }
    printf("Number of islands = %d\n", count);
    return 0;
}