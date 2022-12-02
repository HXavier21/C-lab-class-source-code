#include <stdio.h>
#include <string.h>
char a[10][80];
int i = 0;
void decline()
{
    for (int j = 0; j <= i; j++)
    {
        for (int l = 0; a[j][l] == ' ';)
        {
            for (int n = 0; a[j][l + n + 1] != '\000'; n++)
            {
                a[j][l + n] = a[j][l + 1 + n];
            }
        }
        for (int l = 0; a[j][l] != '\000'; l++)
        {
            if (a[j][l] == '\n')
                a[j][l] = '\0';
            if (a[j][l] == '\t')
            {
                for (int n = 0; a[j][l + n + 1] != '\000'; n++)
                {
                    a[j][l + n] = a[j][l + 1 + n];
                }
            }
        }
    }
}
int main()
{
    while (fgets(a[i], 80, stdin) != NULL)
    {
        i++;
    }
    decline();
    for (int r = 0; r < i; r++)
    {
        printf("%s\n", a[r]);
    }
}