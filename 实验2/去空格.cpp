#include <stdio.h>
int main(){
	int i;
	char input;
	while((input = getchar()) != EOF){
		if (input != ' '){
			i = 0;
			putchar(input);
		}
		else if(input == ' '){
			if(i == 0){
				putchar(input);
				i++;
			}
		}
	}
	return 0; 
} 
