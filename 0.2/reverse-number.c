#include <stdio.h>
int main(){
	long num,rev=0;
	printf("ENTER THE NUMBER TO BE REVERSED : ");
	scanf("%d",&num);
	while(num!=0){
		rev = rev*10+num%10;
		num/=10;
	}
	printf("Reversed Number is  %d\n",rev);
	return 0;
}
