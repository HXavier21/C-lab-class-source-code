#include <stdio.h>
int count = 0;
int queen[8];
int check_up(int n)
{
	int i = 1; 
    for (i = 1; i <= n; i++)
    {
        if ((queen[n] - queen[n - i]) == i || (queen[n] - queen[n - i]) == -i || (queen[n] - queen[n - i]) == 0)
            return 0;
    }
    return 1;
}
void move(int n)
{
    if (n > 7)
        return;
    for (queen[n] = 0; queen[n] <= 7; queen[n]++)
    {
        if (check_up(n))
        {
            if (n == 7)
                count++;
            else
                move(n + 1);
        }
    }
}
int main()
{
    move(0);
    printf("%d\n", count);
}
