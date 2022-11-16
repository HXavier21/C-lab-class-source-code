#include <stdio.h>
int count = 0;
void hanoi(int n, char a, char b, char c)
{
    if (n == 1)
    {
        printf("%c to %c\n", a, c);
        count++;
    }
    else
    {
        hanoi(n - 1, a, c, b);
        printf("%c to %c\n", a, c);
        count++;
        hanoi(n - 1, b, a, c);
    }
}
int main()
{
    printf("Input the number of disks:");
    int n;
    scanf("%d", &n);
    hanoi(n, 'A', 'B', 'C');
    printf("Total Steps: %d\n", count);
    return 0;
}