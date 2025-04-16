#include<stdio.h>
#include<math.h>

int check_prime(int num){
	int i,isPrime=1;
	if(num<=1){
		isPrime=0;
	}
	else{
		for(i=2;i<=sqrt(num);i++){
			if(num%i==0){
				isPrime=0;
				break;
			}
		}
	}
	return isPrime;
}

int main(){
	int a;
	printf("Enter the number to check for prime : ");
	scanf("%d",&a);
	
	if(check_prime(a)){
		printf("The number %d is Prime !",a);
	}
	else{
		printf("The number %d is not Prime !",a);
	}
	
	return 0;
}
