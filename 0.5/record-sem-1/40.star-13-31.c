#include<stdio.h>
int main(){
	char star='*';
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<=i;j++){
			printf("%c\t",star);
		}
		printf("\n");
	}
	for(i=2;i>0;i--){
		for(j=0;j<i;j++){
			printf("%c\t",star);
		}
		printf("\n");
	}
	
	return 0;
}
