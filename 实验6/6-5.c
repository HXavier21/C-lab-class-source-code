#include <stdio.h>
#include <string.h>
void task0(){
	printf("task0 is called!\n");
}
void task1(){
	printf("task1 is called!\n");
}
void task2(){
	printf("task2 is called!\n");
}
void task3(){
	printf("task3 is called!\n");
}
void task4(){
	printf("task4 is called!\n");
}
void task5(){
	printf("task5 is called!\n");
}
void task6(){
	printf("task6 is called!\n");
}
void task7(){
	printf("task7 is called!\n");
}
void execute(int count,void (**fun)()){
	for (int i = 0;i<count;i++){
		fun[i]();
	}
}
void scheduler(){
	void (*function[8])()={
	task0,task1,task2,task3,task4,task5,task6,task7};
	char input[10];
	scanf("%s",&input);
	int count = strlen(input);
	void (*fun[count])(); 
	for (int i = 0;i<count;i++){
		fun[i]=function[(int)input[i]-48];
	}
	execute(count,fun);
}
int main(){
	scheduler();
	return 0;
}