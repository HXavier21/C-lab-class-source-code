#include<stdio.h> 
int IsPerfectNumber(int num);
int IsPerfectNumber(int num){
    int sum=0,factor;
    for(factor=1;factor<num;factor++){
        if(num%factor==0) sum+=factor;
    }
    if(num==sum) return 1;
    else return 0;
}
int main(){
    int num,factor,i=0;
    for(num=2;num<=10000;num++){
        if(IsPerfectNumber(num)==1){
            if(i==0) {
                printf("%d=1",num);
                i++;
            }
            else printf("\n%d=1",num);
            for(factor=2;factor<num;factor++){
                if(num%factor==0) printf("+%d",factor);
            }
        }
    }
    return 0;
}
