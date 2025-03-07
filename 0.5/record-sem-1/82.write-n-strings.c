#include<stdio.h>

int main(){
	FILE *file;
	int n,i;
	char str[100];
	
	printf("Enter the no of strings : ");
	scanf("%d",&n);
	
	file = fopen("output.txt","w");
	
	if(file==NULL){
		printf("File opening unsucessful !");
		return 1;
	}
	
	printf("Enter the %d strings : ",n);
	for(i=0;i<n;i++){
		scanf(" %[^\n]",str);
		fprintf(file," %s\n",str);
	}
	
	fclose(file);
	printf("File wrting sucess !");
	
	return 0;
}
