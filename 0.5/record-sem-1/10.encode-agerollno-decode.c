#include<stdio.h>
int main(){
	int a,b,encode,decode;
	
	printf("Enter your age : ");
	scanf("%d",&a);
	printf("Enter your roll no : ");
	scanf("%d",&b);
	
	encode = a ^ b;
	printf("\nThe encoded value of age is : %d",encode);
	
	decode = encode ^ b;
	printf("\nThe decoded value of age is : %d",decode);
	
	return 0;
}
