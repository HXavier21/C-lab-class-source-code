#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SWAP(a, b, c) t = a, a = b, b = c, c = t
struct data
{
    int id;
    char name[10];
    int Egrade;
    int Mgrade;
    int Pgrade;
    int Cgrade;
    int totalgrade;
    double avergrade;
};
struct data_list
{
    struct data content;
    struct data_list *next;
};
struct data_list *create_list(int n)
{
    int id, Egrade, Mgrade, Pgrade, Cgrade;
    char name[10];
    struct data data;
    struct data_list *head, *tail;
    head = (struct data_list *)malloc(sizeof(struct data_list));
    scanf("%d %s %d %d %d %d",
          &data.id, data.name,
          &data.Egrade, &data.Mgrade,
          &data.Pgrade, &data.Cgrade);
    head->content = data;
    tail = head;
    for (int i = 0; i < n - 1; i++)
    {
        scanf("%d %s %d %d %d %d",
              &data.id, data.name,
              &data.Egrade, &data.Mgrade,
              &data.Pgrade, &data.Cgrade);
        tail->next = (struct data_list *)malloc(sizeof(struct data_list));
        tail = tail->next;
        tail->content = data;
    }
    tail->next = NULL;
    return head;
}
void query(struct data_list *head)
{
    while (head)
    {
        printf("%d %s %d %d %d %d\n",
               head->content.id, head->content.name,
               head->content.Egrade, head->content.Mgrade,
               head->content.Pgrade, head->content.Cgrade);
        head = head->next;
    }
}
void modify(struct data_list *head)
{
    int id, order, grade,
        Egrade, Mgrade, Pgrade, Cgrade;
    char name[10];
    struct data *modify;
    scanf("%d %d", &id, &order);
    while (head)
    {
        if (id == head->content.id)
        {
            modify = &head->content;
            break;
        }
        head = head->next;
    }
    if (order == 0)
    {
        scanf("%s", name);
        strcpy(modify->name, name);
    }
    else
    {
        scanf("%d", &grade);
        if (order == 1)
            modify->Egrade = grade;
        else if (order == 2)
            modify->Mgrade = grade;
        else if (order == 3)
            modify->Pgrade = grade;
        else
            modify->Cgrade = grade;
    }
    printf("%d %s %d %d %d %d\n",
           modify->id, modify->name,
           modify->Egrade, modify->Mgrade,
           modify->Pgrade, modify->Cgrade);
}
void order(int n, struct data_list *head)
{
    struct data_list *headflag, *t, *r, *s, *headsign;
    headflag = head;
    for (int i = 1; i < n; i++)
    {
        head = headflag;
        for (int j = 0; j < n - i; j++)
        {
            if (head->content.avergrade > head->next->content.avergrade)
            {
                t = head;
                r = head->next;
                s = head->next->next;
                head = r;
                if (j == 0)
                {
                    headflag = head;
                }
                else
                {
                    headsign->next = r;
                }
                r->next = t;
                t->next = s;
            }
            headsign = head;
            head = head->next;
        }
    }
    head = headflag;
    while (head)
    {
        printf("%d %s %.2lf\n",
               head->content.id, head->content.name,
               head->content.avergrade);
        head = head->next;
    }
}
void grade_pro(int n, int option, struct data_list *head)
{
    struct data_list *headflag;
    headflag = head;
    while (head)
    {
        head->content.totalgrade = head->content.Cgrade +
                                   head->content.Egrade +
                                   head->content.Mgrade +
                                   head->content.Pgrade;
        head->content.avergrade = head->content.totalgrade / 4.0;
        if (option == 4)
            printf("%d %s %.2lf\n",
                   head->content.id,
                   head->content.name,
                   head->content.avergrade);
        else if (option == 5)
            printf("%d %s %d %.2lf\n",
                   head->content.id,
                   head->content.name,
                   head->content.totalgrade,
                   head->content.avergrade);
        head = head->next;
    }
    head = headflag;
    if (option == 6)
    {
        order(n, head);
    }
}
int main()
{
    int option, n;
    struct data_list *head;
    scanf("%d", &option);
    if (option == 1)
    {
        scanf("%d", &n);
        head = create_list(n);
        printf("完成了%d位同学的成绩输入。\n", n);
        while (scanf("%d", &option) != EOF)
        {
            if (option == 2)
                query(head);
            else if (option == 3)
                modify(head);
            else if (option == 4 || option == 5 || option == 6)
                grade_pro(n, option, head);
            else if (option == 0)
                break;
        }
    }
    else
        printf("No Data!");
    return 0;
}