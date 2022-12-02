#include <stdio.h>
#define N 3
#define M 10
int is_out[11];
int result[11];
void decline()
{
    int i = 0, index = 0, count = 1;
    while (count <= M)
    {
        i++;
        index++;
        if (index >= M + 1)
            index = 1;
        while (is_out[index] == 1)
            index = (index + 1 >= M + 1) ? 1 : index + 1;
        if (i >= N)
        {
            result[count] = index;
            is_out[index] = 1;
            count++;
            i = 0;
        }
    }
}
int main()
{
    decline();
    for (int j = 1; j <= M; j++)
    {
        printf("%d ", result[j]);
    }
    return 0;
}