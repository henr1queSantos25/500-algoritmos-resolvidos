#include <stdio.h>
#include <math.h>
int main(){
	int num, i;
	
	for(i = 0; i < 5; i++){
		printf("Digite um numero para saber seu quadrado: ");
		scanf("%d",&num);
		printf("%d ao quadrado = %d\n",num,num*num);
	}
}
