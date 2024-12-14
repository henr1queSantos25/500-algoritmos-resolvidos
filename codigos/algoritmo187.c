#include <stdio.h>
int main(){
	int base, expo, i = 1;
	printf("Digite a base: ");
	scanf("%d",&base);
	printf("Digite por quanto quer elevar a base: ");
	scanf("%d",&expo);
	
	if(base >= 2 && expo > 1){
		while(expo > 0){
			i *= base;
			expo--;
		}
		printf("Resultado = %d\n",i);
	}
	else{
		printf("Digite uma valor valido\n");
	}
}
