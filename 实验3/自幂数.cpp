#include<stdio.h> 
int IsSelfPoweredNumber(int n,int num);
int IsSelfPoweredNumber(int n,int num){
    int sum=0,alter1=num,alter2=num,i,j,power=1;
    for (i=1;i<=n;i++){
        alter1 %= 10;
        for (j=1;j<=n;j++){
            power *=alter1;
        }
        sum += power;
        power = 1;
        alter2 /= 10;
        alter1 = alter2;
    }
    if (sum==num) return 1;
    else return 0;
}
int main(){
    int num,n,count=0,i,min=1,judge=0;
    while(scanf("%d",&n)!=EOF){
        if(n==3) printf("3λ��ˮ�ɻ�������");
        else if(n==4) printf("4λ����Ҷõ��������");
        else if(n==5) printf("5λ�������������");
        else if(n==6) printf("6λ������������");
        else if(n==7) printf("7λ�ı�����������");
        else if(n==8) printf("8λ�İ���������");
        else if(n==0) break;
        for (i=1;i<n;i++){
            min *=10;
        }
        for (num=min;num<10*min;num++){
            if (IsSelfPoweredNumber(n,num)==1){
                count++;
            }
        }
        printf("%d��",count);
        for (num=min;num<10*min;num++){
            if (IsSelfPoweredNumber(n,num)==1){
                if (judge == 0){
                    printf("%d",num);
                    judge++;
                }
                else printf(",%d",num);
            }
        }
        min = 1;
        judge = 0;
        count = 0;
        printf("\n");
    }
    return 0;
}
