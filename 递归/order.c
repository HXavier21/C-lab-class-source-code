#include <stdio.h>
#define SWAP(a,b) (t=a,a=b,b=t)
int a[7];
void order(int m,int n){
	int i=m,j=n,flag,t;
	flag=a[m];
	while (i!=j){
		while(a[j]>flag){
			j--;
		}
		SWAP(a[i],a[j]);
		while(a[i]<flag){
			i++;
		}
		SWAP(a[i],a[j]);
		if(a[i]==a[j]) break;
	}
	a[i]=flag;
	if(m<i-1) order(m,i-1);
	if(n>i+1) order(i+1,n);
}
int main()
{
	int i=0;
	while (scanf("%d",&a[i])!=EOF){
		i++;
	}
	order(0,6);
	for(i=0;i<=6;i++){
		printf("%d ",a[i]);
	}
}
