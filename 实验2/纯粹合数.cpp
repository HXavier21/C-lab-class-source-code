#include <stdio.h>
int main( )
{ 
	int num,a,b,c,d,i; 
	printf("本程序输出所有三位纯粹合数，如下：\n");
	for(num = 100;num <= 999;num++){
		//divide num
		a = num/100;
		b = (num-(100*a))/10;
		//is num composite number? 
		for(i=2,c=num>>1;i<=c;i++){
			if((num%i)==0){
				//leave a,b
				d = (10*a)+b;
				for(i=2,c=d>>1;i<=c;i++){
					if((d%i)==0){
						//leave a
						for(i=2,c=a>>1;i<=c;i++){
							if((a%i)==0){
								printf("%d ",num);
								break;
							}
						}
						break;
					}
				}
				break;
			}
		}
	}
	return 0;
}

