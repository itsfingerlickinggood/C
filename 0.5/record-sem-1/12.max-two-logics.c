#include<stdio.h>
int main(){
	int a,b;
	
	printf("Enter the first number : ");
	scanf("%d",&a);
	printf("Enter the second number : ");
	scanf("%d",&b);
	
	char ans;
	ans='y';
	
	int choice;
	
	while(ans=='y'){
		
		printf("Enter your choice to find max between 2 nums : ");
		printf("\n\t1.if-else\n\t2.Ternary Operator\nEnter your choice : ");
		scanf("%d",&choice);
		
		if(choice==1){
			if(a>b){
				printf("%d is bigger than %d !",a,b);
			}	
			else if(a==b){
				printf("%d and %d are equal !",a,b);
			}
			else{
				printf("%d is bigger than %d !",b,a);
			}
		}
		
		else if(choice==2){
			a > b ? printf("%d is bigger than %d !",a,b) : printf("%d is bigger than %d !",b,a);
		}
		
		else{
			printf("Invalid Choice !");
		}
		printf("\nDo you want to continue ? (y)->Yes / (n)->No  : ");
		scanf(" %c",&ans);
	}
	
	return 0;
}
