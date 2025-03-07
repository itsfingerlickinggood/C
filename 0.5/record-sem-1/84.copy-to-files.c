#include<stdio.h>

int main(){
	FILE *src,*dest;
	char ch,srcFile[100],destFile[100];
	
	printf("Enter the source file : ");
	scanf("%s",srcFile);
	printf("Enter the destination file : ");
	scanf("%s",destFile);
	
	src = fopen(srcFile,"r");
	dest = fopen(destFile,"w");
	
	if(src==NULL || dest==NULL){
		printf("Files cannot be opened sucessfully !");
		return 1;
	}
	
	while((ch=fgetc(src))!=EOF){
		fputc(ch,dest);
	}
	
	printf("File copied successfuly! ");
	
	fclose(src);
	fclose(dest);
	
	return 0;
}
