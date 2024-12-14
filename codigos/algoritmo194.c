#include <stdio.h>
int main(){
	int num, i, mult = 1;
	printf("digite um numero: ");
	scanf("%d",&num);
	
	for(i = 1; i <= num; i++){
		printf("%d ",i);
		mult *= i;
	}
	printf("\nMULTPICACAO = %d \n",mult);
}
