#include<stdio.h>
int main(){
	char a[50],b[50],c[100];
	
	printf("Enter the first string : ");
	scanf("%s",a);
	printf("Enter the second string : ");
	scanf("%s",b);
	
	int i,j;
	
	for(i=0;a[i]!='\0';i++){
		c[i]=a[i];
	}
	
	for(j=0;b[j]!='\0';j++){
		c[i+j]=b[j];
	}
	
	printf("The concatenated string is : %s",c);
	
	return 0;
}
