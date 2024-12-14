#include <stdio.h>
int main(){
	int x;
	for(x = 1; x <= 600; x++){
		if(x % 2 == 0){
			printf("%d eh par\n",x);
		}
	}
}
