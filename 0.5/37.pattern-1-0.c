#include<stdio.h>
int main(){
	char ans='y';
	while(ans=='y'){
		int input,i,j;
		printf("Type 1 to print a pattern of 0 and 1 from 1->4 : ");
		scanf("%d",&input);
		
		if(input==1){
			for(i=1;i<=4;i++){
				for(j=1;j<=i;j++){
					printf("%d\t",j%2);
				}
				printf("\n");
			}				
		}
		else{
			printf("Invalid Choice!");
		}
		
	printf("\nDo you want to continue ? (y->Yes/n->No) :");
	scanf("%c",ans);	
	}
	
	return 0;
	
}
