#include <stdio.h>
int main(){
	int i;
	float pol = 2.54, x;
	for(i = 1; i <=20; i++){
		x = pol * i;
		printf("%d polegadas = %.2f\n",i,x);
	}
}
