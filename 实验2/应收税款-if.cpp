#include<stdio.h>
int main(){
	float wage,a;
	printf("�����빤�ʣ�");
	scanf("%f",&wage);
	if(wage<1000){
		printf("Ӧ��˰��0Ԫ");
	}
	else{
		if(wage<2000){
			a = (wage-1000)*0.05;
			printf("Ӧ��˰��%.1fԪ",a);
		}
		else{
			if(wage<3000){
				a = (wage-2000)*0.1+50;
				printf("Ӧ��˰��%.1fԪ",a);
			}
			else{
				if(wage<4000){
					a = (wage-3000)*0.15+50+100;
					printf("Ӧ��˰��%.1fԪ",a);
				}
				else{
					if(wage<5000){
						a = (wage-4000)*0.2+50+100+150;
						printf("Ӧ��˰��%.1fԪ",a);
					}
					else{
						a = (wage-5000)*0.25+50+100+150+200;
						printf("Ӧ��˰��%.1fԪ",a);
					}
				}
			}
		}
	}
}
