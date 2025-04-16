#include<stdio.h>
int main(){
	char ans='y';
	while(ans=='y'){
		int input,i,j;
			
		printf("Enter 1 to print pattern from 4 to 1 : ");
		scanf("%d",&input);
		
		if(input==1){
			for(i=4;i>=1;i--){
				for(j=1;j<=i;j++){
					printf("\t%d",j);
				}
				printf("\n");
			}
		}
		else{
			printf("\nInvalid Choice !");
		}
	
		printf("\nDo you want to continue ? (y->Yes/n->No) : ");
		scanf(" %c",&ans);
	}
	
	return 0;
}
