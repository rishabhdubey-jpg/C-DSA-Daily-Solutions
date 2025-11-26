// Maximum size rectangle of all 1s in binary matrix.
#include <stdio.h>
int maxAreaHistogram(int heights[], int n)
{
    int stack[100], top = -1;
    int maxArea = 0, area = 0;
    int i = 0;
    while (i < n)
    {
        if (top == -1 || heights[stack[top]] <= heights[i])
        {
            stack[++top] = i++;
        }
        else
        {
            int h = heights[stack[top--]];
            int width = (top == -1) ? i : i - stack[top] - 1;
            area = h * width;
            if (area > maxArea)
                maxArea = area;
        }
    }
    while (top != -1)
    {
        int h = heights[stack[top--]];
        int width = (top == -1) ? i : i - stack[top] - 1;
        area = h * width;
        if (area > maxArea)
            maxArea = area;
    }
    return maxArea;
}
int main()
{
    int a[10][10], n, m;
    int heights[10] = {0};
    printf("Enter rows and columns: ");
    scanf("%d %d", &n, &m);
    printf("Enter binary matrix elements (0/1):\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    int maxRectangle = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 1)
                heights[j]++;
            else
                heights[j] = 0;
        }

        int area = maxAreaHistogram(heights, m);
        if (area > maxRectangle)
            maxRectangle = area;
    }
    printf("Maximum size rectangle of all 1s = %d\n", maxRectangle);
    return 0;
}