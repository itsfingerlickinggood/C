#include<stdio.h>
int main(){
	char a[20],b,c;
	
	printf("Enter a string");
	scanf("%s",a);
	
	printf("Enter the char to be replaced : ");
	scanf("%s",b);
	
	int i;
	
	for(i=0;a[i]!='\0';i++){
		if(a[i]==b){
			printf("Enter the char to replace %s : ",b);
			scanf("%s",c);
			
		}
		else{
			printf("Character is NOT Found !");
		}
	}
}
