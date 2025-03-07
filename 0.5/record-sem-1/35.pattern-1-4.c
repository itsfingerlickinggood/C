#include<stdio.h>
int main(){
	char ans='y';
	while(ans=='y'){
		int a=4,i,j,input;
		printf("Type '1' to print a pattern from 1 to 4 in a triangluar pyramid shape :");
		scanf("%d",&input);
		
		if(input==1){
			for(i=1;i<=a;i++){
				for(j=1;j<=i;j++){
					printf("%d\t",j);
				}
				printf("\n");
			}
		}
		else{
			printf("Invalid Choice !");
		}
		
		printf("Do you want to continue ? (y->yes/n->no) :");
		scanf(" %c",&ans);
	}
	
	return 0;
}
