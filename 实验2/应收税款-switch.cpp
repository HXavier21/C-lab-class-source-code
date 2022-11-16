#include<stdio.h>
int main(){
	float wage=0,tax=0;
	char a;
	scanf("%f",&wage);
	if(wage<1000) a='a';
	if(wage<2000&&wage>=1000) a='b';
	if(wage<3000&&wage>=2000) a='c';
	if(wage<4000&&wage>=3000) a='d';
	if(wage<5000&&wage>=4000) a='e';
	if(wage>=5000) a='f';
	switch(a){
		case 'a':
			tax = 0;
			printf("应收税金%f元",tax);
			break;
		case 'b':
			tax = (wage-1000)*0.05;
			printf("应收税金%f元",tax);
			break;
		case 'c':
			tax = (wage-2000)*0.1+50;
			printf("应收税金%f元",tax);
			break;
		case 'd':
			tax = (wage-3000)*0.15+50+100;
			printf("应收税金%f元",tax);
			break;
		case 'e':
			tax = (wage-4000)*0.2+50+100+150;
			printf("应收税金%f元",tax);
			break;
		case 'f':
			tax = (wage-5000)*0.25+50+100+150+200;
			printf("应收税金%f元",tax);
			break;
		default:
			printf("error");
	}
}
