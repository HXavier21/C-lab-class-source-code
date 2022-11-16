#include<stdio.h>
int main(){
	float wage,a;
	printf("请输入工资：");
	scanf("%f",&wage);
	if(wage<1000){
		printf("应收税金0元");
	}
	else{
		if(wage<2000){
			a = (wage-1000)*0.05;
			printf("应收税金%.1f元",a);
		}
		else{
			if(wage<3000){
				a = (wage-2000)*0.1+50;
				printf("应收税金%.1f元",a);
			}
			else{
				if(wage<4000){
					a = (wage-3000)*0.15+50+100;
					printf("应收税金%.1f元",a);
				}
				else{
					if(wage<5000){
						a = (wage-4000)*0.2+50+100+150;
						printf("应收税金%.1f元",a);
					}
					else{
						a = (wage-5000)*0.25+50+100+150+200;
						printf("应收税金%.1f元",a);
					}
				}
			}
		}
	}
}
