#include<stdio.h>

int main(){
	int a,b;
	
	printf("Enter first number : ");
	scanf("%d",&a);
	printf("Enter second number : ");
	scanf("%d",&b);
	
	char ans='y';
		
	int choice;
	while(ans=='y'){
		printf("\n\t1.AND (&): Performs a bitwise AND operation.\n\t2.OR (|): Performs a bitwise OR operation.\n\t3.XOR (^): Performs a bitwise XOR operation.\n\t4.NOT (~): Performs a bitwise NOT operation (inversion).\n\t5.Left Shift (<<): Shifts bits to the left by a specified number of positions.\n\t6.Right Shift (>>): Shifts bits to the right by a specified number of positions.");		
		printf("\n\nEnter Your Choice : ");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:
				printf("AND operation of %d and  %d -> %d",a,b,a&b);
				break;
			case 2:
				printf("OR operation of %d and  %d -> %d",a,b,a|b);
				break;
			case 3:
				printf("XOR operation of %d and  %d -> %d",a,b,a^b);
				break;
			case 4:
				printf("NOT operation of %d and  %d -> %d,%d",a,b,~a,~b);
				break;
			case 5:
				printf("Left Shift operation of %d by %d positions -> %d\n", a, b, a << b);
				break;
			case 6:
				printf("Right Shift operation of %d by %d positions -> %d\n", a, b, a >> b);
				break;
			default:
				printf("Invalid CHOICE ! . TRY again .");
		}
		
		printf("\nDo you want to continue ? (y)->yes (n)->no : ");		
		scanf(" %c",&ans);
	}
	
	return 0;
}
