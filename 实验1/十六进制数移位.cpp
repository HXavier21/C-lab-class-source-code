#include<stdio.h>
int main(){
    unsigned short x,m,n,q;
    scanf("%hx %hd %hd",&x,&m,&n);
    int a = 16-m;
    if ((m > 15 || m < 0) || (n < 1 || n > a)){
        printf("error");
    }
    else{
        printf("%hx",x<<=(16-m-n));
    }
    return 0;
}

