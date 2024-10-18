#include<stdio.h>
int main(){
	int a;
	printf("Enter the age to be classified : ");
	scanf("%d",&a);
	if(a>=65){
		printf("Senior citizen");
	}
	else if(a>18){
		printf("Adult");
	}
	else if(a>10){
		printf("Teenager");
	}
	else if(a>0){
		printf("Child");
	}
	else{
		printf("INVALID");
	}
	return 0;
}
