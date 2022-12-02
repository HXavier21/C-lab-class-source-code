#include <stdio.h>
int queen[11] = {1};
int count = 0;
int abs(int input)
{
    return (input >= 0) ? input : (-input);
}
int checkup(int row)
{
    int i;
    for (i = 1; i <= row; i++)
    {
        if ((abs(queen[row] - queen[row - i]) == i) || (queen[row] == queen[row - i]))
        {
            return 0;
        }
    }
    return 1;
}
void move(int row, int n)
{
    if (row > n-1)
        return;
    for (queen[row] = 1; queen[row] <= n; queen[row]++)
    {
        if (row < n-1)
        {
            if (checkup(row))
                move(row + 1, n);
        }
        else
        {
            if (checkup(row))
                count++;
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    move(0, n);
    if (count > 0)
        printf("%d", count);
    else
        printf("无解");
    return 0;
}