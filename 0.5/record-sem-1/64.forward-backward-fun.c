#include<stdio.h>

int i;

void forward(int a){
	for(i=1;i<=a;i++){
		printf("\t%d",i);
	}
}

void backward(int a){
	for(i=a;i>0;i--){
		printf("\t%d",i);
	}
}

int main(){
	
	int num;
	
	printf("Enter the number to find 1->N and N->1 : ");
	scanf("%d",&num);
	
	printf("\n1->N : ");
	forward(num);
	
	printf("\nN->1 : ");
	backward(num);
	
	return 0;
}
