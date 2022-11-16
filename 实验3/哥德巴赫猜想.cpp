#include <stdio.h>
int IsPrimeNumber(int num);
int main()
{
    int input,i,remain;
    while(scanf("%d",&input)!=EOF){
        if(input<4){
            printf("error\n");
        }
        else{
            for(i=2;i<=input>>1;i++){
                remain = input - i;
                if(IsPrimeNumber(i)+IsPrimeNumber(remain)==0){
                    printf("%d=%d+%d\n",input,i,remain);
                    break;
                }
            }
        }
    }
    return 0;
}
int IsPrimeNumber(int num){
    int i,lim,judge=0;
    for(i=2,lim=num>>1;i<=lim;i++){
        if((num%i)==0){
            judge=1;
            break;
        }
    }
    return judge;
}
