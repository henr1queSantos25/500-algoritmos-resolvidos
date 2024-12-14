#include <stdio.h>
int main(){
	int lim, i;
	printf("digite um limite: ");
	scanf("%d",&lim);
	
	for(i = 1; i < lim; i++){
		if(i % 2 != 0){
			printf("%d\n",i);
		}
	}
}
