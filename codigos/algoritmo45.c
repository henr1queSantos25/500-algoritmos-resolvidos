#include <stdio.h>
#include <math.h>
int main()
{
	float num, raiz, quadrado;
	printf("Digite um numero: ");
	scanf("%f",&num);
	
	raiz= sqrt(num);
	quadrado= num*num;
	
	printf("Numero %f\n",num);
	printf("Raiz de %f = %f\n",num,raiz);
	printf("%f ao quadrado = %f\n",num,quadrado);
	
	system("PAUSE");
}
