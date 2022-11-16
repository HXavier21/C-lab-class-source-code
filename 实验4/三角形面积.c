#include <stdio.h>
#include <math.h>
#define S(a, b, c) (a + b + c)
#define Area(s, a, b, c) (s * (s - a) * (s - b) * (s - c))
int main()
{
    float a, b, c;
    float s, area;
    while (scanf("%f %f %f", &a, &b, &c)!=EOF){
    	s = S(a, b, c) / 2;
    	area = sqrt(Area(s, a, b, c));
    	printf("%f\n", area);
	}
    return 0;
}
