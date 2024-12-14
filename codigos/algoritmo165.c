#include <stdio.h>
int main(){
	int i, j, t;
	for(i = 1; i <= 9; i++){
		for(j = i + 1; j <= 10; j++){
			printf("%d-%d\t",i,j);
		}
		for(t = 1; t <= i; t++){
			printf("\t");
		}
        printf("\n");
	}
}
