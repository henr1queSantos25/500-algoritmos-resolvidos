#include <stdio.h>

main()
{
	char nome[100],nome1[100],nome2[100],endereco[100],endereco2[100], telefone[100];
	
	printf("Digite seu nome: \n");
	scanf("%s%s%s",&nome,&nome1,&nome2);
	
	printf("Digite seu endereco: \n");
	scanf("%s%s",&endereco,endereco2);
	
	printf("Digite seu telefone: \n");
	scanf("%s",&telefone);
	
	printf("Seu nome eh: %s %s %s\n",nome,nome1,nome2);
	
	printf("Seu endereco eh: %s %s\n",endereco,endereco2);
	
	printf("Seu telefone eh: %s\n",telefone);
	
	
   return 0;
   system("PAUSE");
}
