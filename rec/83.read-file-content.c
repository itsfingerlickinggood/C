#include<stdio.h>
int main(){
	
	int i;
	FILE *file;
	char ch;
	
	file = fopen("output.txt","r");
	
	if(file==NULL){
		printf("File is not opened sucessusully !");
		return 1;
	}	
	
	printf("The file contents are :\n");
	while((ch=fgetc(file))!=EOF){
		putchar(ch);
	}
	
	fclose(file);
	
	return 0;
}
