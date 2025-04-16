#include<stdio.h>
int main(){
	
	char a[50];
	
	printf("enter a string : ");
	scanf("%s",a);
	
	int i,count=0;
	
	for(i=0;a[i]!='\0';i++){
		count++;
	}
	
	printf("The reversed word is : ");
	for(count;count>=0;count--){
		printf("%c",a[count]);
	}
	
	return 0;
}
