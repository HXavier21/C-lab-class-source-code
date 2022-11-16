#include<stdio.h> 
int main(){
    char c = 0;
    while(1){
        c = getchar();
        if (c >= 65 && c <= 90){
            putchar(c+32);
        }
        else{
            if (c == EOF)
                break;
            else
                putchar(c);
        }
    }
    return 0;
}

