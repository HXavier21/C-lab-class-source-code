#include <stdio.h>
int main( )
{ 
	int i, x, k, flag = 0;
	printf("�������жϺ��������������1����������Ctrl+Z����\n");
	while (scanf("%d", &x) !=EOF) {
		for(i=2,k=x>>1;(x%i)&&(i<=k);i++){}
		if(i!=k+1) flag = 1;
		if(flag==1) printf("%d�Ǻ���", x);
		else printf("%d���Ǻ���", x);
		flag = 0;
	}
	return 0;
}


