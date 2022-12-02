#include <stdio.h>
int matrix[10][10];
int spinned[10][10];
int n, m;
int main()
{
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    spin();
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d", spinned[i][j]);
            if (j != n - 1)
                printf(" ");
        }
        printf("\n");
    }
}
void spin()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            spinned[m - 1 - j][i] = matrix[i][j];
        }
    }
}