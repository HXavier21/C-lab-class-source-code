#include <stdio.h>
#define CHANGE 1
int main()
{
    char input;
    printf("Please input a sentence:");
    while ((input = getchar()) != EOF)
    {
#if CHANGE == 0
        putchar(input);
#else
        if (input >= 65 && input <= 90)
            input += 32;
        else if (input >= 97 && input <= 122)
            input -= 32;
        putchar(input);
#endif
    }
    return 0;
}
