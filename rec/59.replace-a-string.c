#include<stdio.h>
int main(){
	char a[20],b,c;
	
	printf("Enter a string : ");
	scanf("%s",a);
	
	printf("Enter the char to be replaced : ");
	scanf(" %c",&b);
	
	int i,x=1;
	
	for(i=0;a[i]!='\0';i++){
		if(a[i]==b){
			printf("Character Found !\n");
			printf("Enter the char to replace %c : ",b);
			scanf("  %c",&c);
			printf("\n");
			a[i]=c;
			x=0;
		}
	}
	
	if(x){
		printf("\nCharacter is NOT Found !");
	}
	else{
		printf("Character is Replaced Successfully and Repalced string is : %s !",a);
	}
	
	return 0;
}
