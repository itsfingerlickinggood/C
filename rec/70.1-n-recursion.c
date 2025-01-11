#include<stdio.h>

int one_n(int n){
	if(n==0){
		return 0;
	}
	else{
		one_n(n-1);
		printf("%d\t",n);
		
	}
}

int main(){
	int a;
	
	printf("Enter upto which 1->N is to be printed : ");
	scanf("%d",&a);
	
	one_n(a);
	
	return 0;
}
