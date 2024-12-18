#include<stdio.h>
int main(){
	int a,b;
	printf("Enter the same no of rows for the array : ");
	scanf("%d",&a);
	printf("Enter the same no of columns for the array : ");
	scanf("%d",&b);
	
	int i,j,array[a][b];
	
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("Enter the element at [%d][%d]: ",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	
	printf("\nThe Array is :\n");
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("\t%d",array[i][j]);
		}
		printf("\n");
	}
	
	char ans='y';
	while(ans=='y'){
		int f_sum=0,b_sum=0,choice; 
		
		printf("\n1.Calculate Forward AND Backward Diagonal\n2.Exit");
		printf("\nEnter your choice: ");
		scanf("%d",&choice);
		if(choice==1){
			if(a==b){
				printf("\nForward AND Backward Diagonal Calculation\n");
				
				for(i=0;i<a;i++){
					f_sum+=array[i][i];
					b_sum+=array[i][a-i-1];
				}
				printf("\nForward Diagonal Calculation : %d",f_sum);
				printf("\nBackward Diagonal Calculation : %d",b_sum);
			}
			else{
				printf("\nForward AND Backward Diagonal Calculation NOT POSSIBLE !\n");
			}
		}
		else{
			break;
		}
		
		printf("\nDo you want to continue ? (yes->y/no->n) : ");
		scanf(" %c",&ans);
	}
	return 0;
}
