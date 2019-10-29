#include<stdio.h>

int main(void){
	int i,j,n;
	
	printf("Enter n: ");
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		for(j=1;j<=2*n;j++){
			if((i+j)%2 == 0)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
