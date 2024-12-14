#include <stdio.h>
int main(){
	int quant, soma = 0, num = 1;
	printf("Digite quantos impares quer ver: ");
	scanf("%d",&quant);
	
    while(quant > 0){
    	printf("%d\n",num);
    	soma += num;
    	num += 2;
    	quant--;
	}
	printf("A soma dos numeros impares eh: %d\n", soma);
}
