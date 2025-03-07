#include<stdio.h>

float add(float a,float b){
	return a+b;
}

float sub(float a,float b){
	return a-b;
}

float mult(float a,float b){
	return a*b;
}

float div(float a,float b){
	return a/b;
}

int main(){
	
	char ans='y';
	
	while(ans=='y'){
		
		float a,b;
		
		printf("Enter two numbers : ");
		scanf("%f%f",&a,&b);
		
		int choice;
		
		printf("\n1.Add\n2.Subtract\n3.Multiplication\n4.Divide\n");
		
		printf("\nEnter your choice : ");
		scanf("%d",&choice);
		printf("\n");
		
		switch(choice){
			case 1:
				printf("%.2f + %.2f = %.2f",a,b,add(a,b));
				break;
			case 2:
				printf("%.2f - %.2f = %.2f",a,b,sub(a,b));
				break;
			case 3:
				printf("%.2f * %.2f = %.2f",a,b,mult(a,b));
				break;
			case 4:
				printf("%.2f / %.2f = %.2f",a,b,div(a,b));
				break;
			default :
				printf("Invalid Choice !");
		}
		
		printf("\n\nDo you want to continue ? (y->yes/n->no) : ");
		scanf(" %c",&ans);
	}
	
	return 0;
}
