#include <stdio.h>
int main( )
{ 
	int i, x, k, flag = 0;
	printf("�������жϺ��������������1����������Ctrl+Z����\n");
	while (scanf("%d", &x) !=EOF) {
		i = 2;
		k = x >>1;
		if(x==2) printf("%d���Ǻ���", x);
		else{
			do{
				if(!(x%i)){
				flag = 1;
				break;
				}
				i++;
			}while(i<=k);
			if(flag==1) printf("%d�Ǻ���", x);
			else printf("%d���Ǻ���", x);
		}
		flag = 0;
	}
	return 0;
}

