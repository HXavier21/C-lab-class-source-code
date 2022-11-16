#include<stdio.h>
int main(){
	long end,square;
	for(int num=100;num<1000;num++){
		square = num*num;
		end = square % 1000;
		if(end == num) {
			printf("%d\n",num);
		}
	}
	return 0;
}
