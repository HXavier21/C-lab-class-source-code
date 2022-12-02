#include <stdio.h>
#include <string.h>
#define SWAPGRADE(a, b) s = a, a = b, b = s
struct
{
    char name[10];
    int grade;

} data[10];
int n;
void insert()
{
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s %d\n", &data[i].name, &data[i].grade);
    }
    printf("%d records were input!\n", n);
}
void reorder()
{
    int s;
    char t[10];
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (data[j].grade < data[j + 1].grade)
            {
                SWAPGRADE(data[j].grade, data[j + 1].grade);
                strcpy(t, data[j].name);
                strcpy(data[j].name, data[j + 1].name);
                strcpy(data[j + 1].name, t);
            }
        }
    }
    printf("Reorder finished!\n");
}
void output()
{
    for (int i = 0; i < n; i++)
    {
        printf("%s %d\n", data[i].name, data[i].grade);
    }
}
int middle;
void dichotomy(int grade, int start, int end)
{
    middle = (end + start) / 2;
    if (grade == data[middle].grade)
    {
        printf("%s %d\n", data[middle].name, data[middle].grade);
        return;
    }
    else if (start == end)
    {
        printf("not found!\n");
        return;
    }
    else if (grade > data[middle].grade)
    {
        if (middle == start + 1)
            middle = start;
        dichotomy(grade, start, middle);
    }
    else if (grade < data[middle].grade)
    {
        if (middle == end - 1)
            middle = end;
        dichotomy(grade, middle, end);
    }
}
void query()
{
    int grade;
    scanf("%d\n", &grade);
    dichotomy(grade, 0, n - 1);
}
int main()
{
    freopen("infile.txt", "r", stdin);
    int opt;
    while (scanf("%d\n", &opt) != EOF)
    {
        if (opt == 1)
            insert();
        else if (opt == 2)
            reorder();
        else if (opt == 3)
            output();
        else if (opt == 4)
            query();
        else if (opt == 0)
            break;
    }
    return 0;
}