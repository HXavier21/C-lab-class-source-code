#include<stdio.h>
int ij(int i,int j);
int blank(int N,int i);
int main() {
	int i=0,j=0,N,n;
	scanf("%d",&N);
	while(i<=N){
		while(n<blank(N,i)){
			printf(" ");
			n++;
		}
		n = 0;
		while(j<=i){
			if(ij(i,j)<10){
				printf("%d   ",ij(i,j));
			}
			else if(ij(i,j)<100){
				printf("%d  ",ij(i,j));
			}
			else if(ij(i,j)<1000){
				printf("%d ",ij(i,j));
			}
			j++;
		}
		j = 0;
		i++;
		printf("\n");
	}
	return 0;
}

int blank(int N,int i) {
	int sum,n;
	sum = 2*(N-i)+N;
	return sum;
}

int ij(int i,int j) {
	int output,mol=1,den=1,a;
	a = j;
	if(i == 0){
		output = 1;
	}
	else{
		while(a>0){
			mol *= i;
			i--;
			a--;
		}
	}
	if(j == 0){
		output = 1;
	}
	else{
		while(j>0){
			den *= j;
			j--;
		}
		output = mol/den;
	}
	return output;
}
