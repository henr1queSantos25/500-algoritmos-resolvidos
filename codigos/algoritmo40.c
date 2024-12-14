#include <stdio.h>
#include <stdlib.h>
main()
{
	int n1,n2,quo,resto;
	
	printf("Digite o primeiro numero: \n");
	scanf("%d",&n1);
	
	printf("Digite o segundo numero: \n");
	scanf("%d",&n2);
	
	quo= n1/n2;
	resto= n1%n2;
	
	printf("Dividendo: %d\n",n1);
	printf("Divisor: %d\n",n2);
	printf("Quociente: %d\n",quo);
	printf("Resto: %d\n",resto);	
	
	
	
	system("PAUSE");
}
