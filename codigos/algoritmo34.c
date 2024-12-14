#include <stdio.h>
main()
{
	int ant,suc,n;
	printf("Digite um numero para saber seu sucessor e antecessor\n");
	scanf("%d",&n);
	
	suc= n+1;
	ant= n-1;
	
	printf("Seu sucessor eh: %d\n",suc);
	printf("Seu antecessor eh: %d\n",ant);
	
	
	system("PAUSE");
}
