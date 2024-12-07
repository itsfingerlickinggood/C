#include<stdio.h>
int main(){
	int a,b,memory=0;;
	
	printf("Enter the first number : ");
	scanf("%d",&a);
	printf("Enter the second number : ");
	scanf("%d",&b);
	
	char ans='y';
	
	int choice,choice1 ;
	
	while(ans=='y'){
		printf("\n\t1.Add\n\t2.Sub\n\t3.Multiply\n\t4.Divide\n\t5.Modulus\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("%d + %d = %d",a,b,a+b);
				break;
			case 2:
				printf("%d - %d = %d",a,b,a-b);
				break;
			case 3:
				printf("%d * %d = %d",a,b,a*b);
				break;
			case 4:
				printf("%d / %d = %d",a,b,a/b);
				break;
			case 5:
				printf("%d % %d = %d",a,b,a%b);
				break;
			default:
				printf("Invalid Choice !");
		}
		printf("\n\t1.Memory Store (MS)\n\t2.Memory Recall (MR)\n\t3.Memory Add (MS+)");
		printf("\nEnter the choice : ");
		scanf("%d",&choice1);
		switch(choice1){
			case 1:
				memory=a+b;
				printf("Memory Store->%d",memory);
				break;
			case 2:
				printf("Memory Recall->%d",memory);
				break;
			case 3:
				memory+=(a+b);
				printf("Memory Add->%d",memory);
				break;
			default:
				printf("Invalid Choice !");
		}
		
		printf("\nDo you want to continue (y)->yes | (n)->no ? : ");
		scanf(" %c",&ans);
	}
	
	return 0;	
}
