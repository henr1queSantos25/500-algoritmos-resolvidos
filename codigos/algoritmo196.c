#include <stdio.h>
int main(){
	int num, i, soma = 0;
	printf("Digite um limite: ");
	scanf("%d",&num);
	
	for(i = 1; i < num; i++){
		if(i % 5 == 0){
			printf("%d\n",i);
			soma += i;
		}
	}
	printf("Soma = %d\n",soma);
}
