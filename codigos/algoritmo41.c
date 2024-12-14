#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
	int n1,n2,n3,n4,media;
	
	printf("Digite o primeiro numero: \n");
	scanf("%d",&n1);
	
	printf("Digite o segundo numero: \n");
	scanf("%d",&n2);
	
	printf("Digite o terceiro numero: \n");
	scanf("%d",&n3);
	
	printf("Digite o quarto numero: \n");
	scanf("%d",&n4);
	
	media= (n1+n2*2+n3*3+n4*4)/10;
	
	printf("MEDIA PONDERADA: %d\n",media);
	
	
	
	
	
	
	
	system("PAUSE");
}
