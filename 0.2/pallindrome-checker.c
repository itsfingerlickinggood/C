#include <stdio.h>
int main(){
	int num,num1 , rev=0;
	printf("Enter the number to be checked for pallindrome : ");
	scanf("%d",&num);
	num=num1;
	while(num!=0){
		rev=rev*10+num%10;
		num/=10;
	}
	printf("the reversed number is : %d and ",rev);
	if(num1==rev){
		printf("IT IS PALLINDROME");
	}
	else{
		printf("IT IS NOT A PALLINDROME");
	}
	return 0;
}
