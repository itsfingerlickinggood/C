#include<stdio.h>

int max(int a,int b){
		return(a>b ? a : b);
	}
	
	int max_of_three(int a,int b,int c){
		int max;
		if(a>b){
			if(a>c){
				max=a;
			}
			else{
				max=c;
			}
		}
		else{
			if(b>c){
				max=b;
			}
			else{
				max=c;
			}
		}
		return max;
	}

int main(){
	
	
	
	int a,b,c;
	printf("Enter the first number : ");
	scanf("%d",&a);
	printf("Enter the second number : ");
	scanf("%d",&b);
	printf("Enter your third number : ");
	scanf("%d",&c);
	
	char ans;
	ans='y';
	
	int choice;
	while(ans=='y'){
		
		printf("\n\t1.If-else\n\t2.User-defined Function\n\t3.Ternary operator\n\t4.Using function two times");
		printf("\nEnter your choice to check which is the biggest among three numbers : ");
		scanf("%d",&choice);
		
		if(choice==1){
			if(a>b){
				if(a>c){
					printf("%d is bigger !",a);
				}
				else{
					printf("%d is bigger !",c);
				}
			}
			else{
				if(b>c){
					printf("%d is bigger !",b);
				}
				else{
					printf("%d is bigger !",c);
				}
			}
		}
		else if(choice==2){
			printf("%d is bigger !",max_of_three(a,b,c));
		}
		else if(choice==3){
			a>b ? (a>c ? printf("%d is the biggest",a) : printf("%d is the biggest",c)) : b>c ? printf("%d is the biggest",b) : printf("%d is the biggest",c);
		}
		else if(choice==4){
			printf("%d is bigger !",max(max(a,b),c));
		}
		else{
			printf("Invalid Choice !");
		}
		printf("\nDo you want to continue (y)->yes (n)->no :");
		scanf(" %c",&ans);
	}
	
	
	
	return 0;
}
