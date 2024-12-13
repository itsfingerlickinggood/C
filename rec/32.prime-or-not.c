#include<stdio.h>
int main(){
	char ans='y';
	do{
		int a,isPrime=1,i;
		printf("Enter the number to find whether it is PRIME or NOT PRIME: ");
		scanf("%d",&a);
		if(a<=1){
			isPrime=0;
		}
		else{
			for(i=2;i<a;i++){
				if(a%i==0){
					isPrime=0;
				}
			}
		}
		
		if(isPrime){
			printf("%d is PRIME !",a);
		}
		else{
			printf("%d is not PRIME !",a);
		}
		
		printf("\nDo you want to continue ? (y->YES/n->NO) : ");
		scanf(" %c",&ans);
	}while(ans=='y');
	
	return 0;
}
