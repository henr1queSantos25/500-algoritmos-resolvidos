#include <stdio.h>
int main(){
	int i, f1, f2, dec;
	float cel;
	printf("Digite o maior valor em Fahrenheit: ");
	scanf("%d",&f1);
	
	printf("Digite o menor valor em Fahrenheit: ");
	scanf("%d",&f2);
	
	printf("Informe o decremento: ");
	scanf("%d",&dec);
	
	printf("FAHRENHEIT\tCELSIUS\n");
	
	for(i = f1; i >= f2; i -= dec){
		cel = 5 * (i - 32) / 9;
		printf("%d\t\t%.2f\n",i,cel);
	}
}
