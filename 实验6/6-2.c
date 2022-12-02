#include <stdio.h>
int main()
{
    unsigned long input;
    scanf("%ld", &input);
    unsigned char *p = (unsigned char *)&input;
    for (int i = 3; i >= 0; i--)
    {
        printf("%02X", (p[i]));
    }
    return 0;
}