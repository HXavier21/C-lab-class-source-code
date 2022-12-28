#include "stdio.h"
#include "stdlib.h"
struct s_list
{
    int data;            /* 数据域 */
    struct s_list *next; /* 指针域 */
};
struct s_list *create_list(int *p);
void main(void)
{
    struct s_list *head = NULL, *p;
    int s[] = {1, 2, 3, 4, 5, 6, 7, 8, 0}; /* 0为结束标记 */
    head = create_list(s);                 /* 创建新链表 */
    p = head;                              /*遍历指针p指向链头 */
    while (p)
    {
        printf("%d\t", p->data); /* 输出数据域的值 */
        p = p->next;             /*遍历指针p指向下一结点 */
    }
    printf("\n");
}
struct s_list *create_list(int *p)
{
    struct s_list *tail = NULL, *loc_head;
    if (p[0] == 0) /* 相当于*p==0 */
        ;
    else
    { /* tail指向动态分配的第一个结点 */
        tail = (struct s_list *)malloc(sizeof(struct s_list));
        tail->data = *p++; /* 对数据域赋值 */
        loc_head = tail;   /* loc_head指向第一个结点 */
        tail->next = NULL;
        while (*p)
        { /* loc_head所指结点的指针域指向动态创建的结点 */
            loc_head = (struct s_list *)malloc(sizeof(struct s_list));
            loc_head->next = tail; /* loc_head指向新创建的结点 */
            loc_head->data = *p++; /* 向新创建的结点的数据域赋值 */
            tail = loc_head;
        }
    }
    return loc_head;
}