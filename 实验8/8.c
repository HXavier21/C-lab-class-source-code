#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int count = 0, flag = 0;
    FILE *fp, *new;
    fpos_t position;
    fp = fopen("D:/abc.txt", "r");
    new = fopen("D:/abc1.txt", "w+");
    char target[10], alter[10], tempc;
    scanf("%s%s", target, alter);
    while ((tempc = fgetc(fp)) != EOF)
    {
        if (tempc == target[0])
        {
            for (int i = 1; i < strlen(target); i++)
            {
                if (i == 1)
                {
                    fgetpos(fp, &position);
                }
                if ((tempc = fgetc(fp)) == target[i])
                {
                    flag++;
                }
                else
                {
                    break;
                }
            }
            if (flag == strlen(target) - 1)
            {
                fprintf(new, "%s", alter);
                count++;
            }
            else
            {
                fsetpos(fp, &position);
                fprintf(new, "%c", target[0]);
            }
        }
        else
        {
            fprintf(new, "%c", tempc);
        }
        flag = 0;
    }
    fclose(fp);
    printf("%d\n", count);
    rewind(new);
    while ((tempc = fgetc(new)) != EOF)
    {
        putchar(tempc);
    }
    fclose(new);
    remove("D:/abc.txt");
    rename("D:/abc1.txt", "D:/abc.txt");
}