#include<stdio.h>
int main(){
	char a[50];
	
	printf("Enter the string to find the length : ");
	scanf("%s",a);
	
	int count=0,i;
	
	for(i=0;a[i]!='\0';i++){
		count++;
	}
	
	printf("The length of the string %s is %d",a,count);
	
	return 0;
}
