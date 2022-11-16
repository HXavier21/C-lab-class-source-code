#include<stdio.h>
double mulx(double x,int n);
long fac(int n);
double sum(double x,int n) {
	int i;
	double z=1.0,y=1.0;
	y = mulx(x,1);
	for(i=1; i<=n; i++) {
		z=z+y/fac(i);
		y*=x;
	}
	return z;
}
double mulx(double x,int n) {
	int i;
	double z=1.0;
	for(i=0;i<n;i++)
	{
		z=z*x;
	}
	return z;
}
long fac(int n) {
	static long h=1;
	h *= n;
	return h;
}
int main() {
	double x;
	int n;
	printf("Input x and n:");
	scanf("%lf%d",&x,&n);
	printf("The result is %lf:",sum(x,n));
	return 0;
}
