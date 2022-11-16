#include<stdio.h>
int main(){
    unsigned long ip,p1,p2,p3,p4;
    while(scanf("%lu",&ip) != EOF){
        p1 = ip >> 24;
        p2 = (ip & 0x00ff0000) >> 16;
        p3 = (ip & 0x0000ff00) >> 8;
        p4 = ip & 0x000000ff;
        printf("%d.%d.%d.%d\n",p1,p2,p3,p4);
    }
    return 0;
}

