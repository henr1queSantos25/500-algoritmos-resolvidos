#include <stdio.h>
int main(){
	int i;
	float num;
	for(i = 1; i <= 10; i++){
		printf("Digite um numero para saber seu valor ao quadrado: ");
		scanf("%f",&num);
		
		printf("%.2f ao quadrado = %.2f\n",num,num*num);
	}
}
