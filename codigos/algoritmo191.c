#include <stdio.h>
int main(){
	int lim, inc, i;
	printf("Digite o limite maximo: ");
	scanf("%d",&lim);
	printf("Digite o incremento: ");
	scanf("%d",&inc);
	
	for(i = 0; i <= lim; i += inc){
		printf("%d\n",i);
	}
	
}
