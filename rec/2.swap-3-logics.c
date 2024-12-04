#include<stdio.h>
int main(){
	int a,b;
	
	printf("Enter the first number : ");
	scanf("%d",&a);
	printf("Enter the second number : ");
	scanf("%d",&b);
	printf("\nWhich Method to be used for interchanging the variable ?\n");
	
	
	int choice;
	char loop;
	
	loop='y';
	
	while(loop=='y'){
		printf("\nTHE CHOICES ARE : \n\t1.Temp Variable\n\t2.XOR operation\n\t3.Simple Add-Sub Method\n");
		printf("\nEnter your choice : ");
		scanf("%d",&choice);
		
		if(choice==1){
			int temp;
			temp=a;
			a=b;
			b=temp;
		}
		else if(choice==2){
			a = a ^ b;
            b = a ^ b;
            a = a ^ b;
		}
		else if(choice==3){
			a=a+b;
			b=a-b;
			a=a-b;
		}
		else{
			printf("Invalid Choice !");
		}
		printf("\n\tThe INTERCHANGED VARIABLES ARE : \n\t1.First NUM -> %d\n\t2.Second NUM -> %d",a,b);
		
		printf("\n\nDO YOU WANT TO CONTINUE (y->YES/n->NO) : ");
		scanf(" %c",&loop);
	}
	

	return 0;
}
