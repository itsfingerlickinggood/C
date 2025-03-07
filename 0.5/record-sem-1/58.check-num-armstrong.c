#include<stdio.h>
#include<math.h>
int main(){
	char a[20];
	
	printf("Enter the number to check for armstrong : ");
	scanf("%s",a);
	
	int i,digit=0,count=0,x=0,sum=0;
	
	for(i=0;a[i]!='\0';i++){
		digit = digit * 10 + (a[i] - '0');
		count++;
	}
	
	for(i=0;a[i]!='\0';i++){
		x = a[i] - '0';
		sum += pow(x,count);
	}
	
	if(sum==digit){
		printf("The Number %s is Armstrong!",a);
	}
	else{
		printf("The Number %s is  NOT Armstrong!",a);
	}
	
	return 0;
}
