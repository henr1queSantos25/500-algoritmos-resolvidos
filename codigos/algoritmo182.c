#include <stdio.h>
int main(){
	float x, num;
	for(x = 1; x <= 10; x++){
		printf("Digite um numero: ");
		scanf("%f",&num);
		printf("A metade de %.2f = %.2f\n",num,num/2);
		
	}
}
