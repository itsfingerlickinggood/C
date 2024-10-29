#include <stdio.h>
int main(){
	int i,j;
	for(i=3;i>0;i--){
		for(j=3;j>=i;j--){
			printf("*");
		}
		printf("\n");
	}
}
