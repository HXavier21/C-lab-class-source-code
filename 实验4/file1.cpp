#include "file.h"
int x,y;             /* �ⲿ�����Ķ�����˵�� */
char ch;             /* �ⲿ�����Ķ�����˵�� */
int main(void)
{
        x=10;
        y=20;
        ch=getchar();
        printf("in file1 x=%d,y=%d,ch is %c\n",x,y,ch);
        func1();
 return 0;
}
