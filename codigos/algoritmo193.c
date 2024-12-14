#include <stdio.h>
int main(){
	int quant, i = 2;
	printf("Digite quantos pares quer ver: ");
	scanf("%d",&quant);
	
	while(quant > 0){
		printf("%d\t",i);
		i += 2;
		quant--;
	}
}
