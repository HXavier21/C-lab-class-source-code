#include <stdio.h>
int main()
{
    unsigned  num, i;
    scanf("%d", &num);
    int a[32] = {0}, power = 2, remainer, divisor;
    for (i = 31; i >= 0; i--)
    {
        remainer = num % power;
        a[i] = remainer;
        num /= power;
        if (num == 0)
            break;
    }
    for (i = 0; i <= 31; i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}