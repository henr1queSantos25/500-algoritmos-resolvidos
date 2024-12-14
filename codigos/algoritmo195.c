#include <stdio.h>
int main(){
	int i, soma = 0;
	for(i = 25; i < 200; i++){
		if(i % 2 == 0){
			printf("%d\n",i);
			soma += i;
		}
	}
	printf("o valor da soma = %d\n",soma);
}
