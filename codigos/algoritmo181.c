#include <stdio.h>
int main(){
	int x, soma = 0;
	for(x = 1; x <= 100; x++){
		printf("%d\n",x);
		soma += x;
	}
	printf("O somatorio foi de %d\n",soma);
}
