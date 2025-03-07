#include<stdio.h>
int main(){
	
	int count=0;
	FILE *file;
	char ch;
	
	file = fopen("output.txt","r");
	
	if(file==NULL){
		printf("The file cannot be opened !");
		return 1;
	}
	
	while((ch=fgetc(file))!=EOF){
		count++;
	}
	
	printf("The no of characters in the file is : %d",count);
	
	return 0;
}
