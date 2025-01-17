#include<stdio.h>

void rec_fun(FILE *file){
	char ch=fgetc(file);
	if(ch == EOF){
		return;
	}
	putchar(ch);
	rec_fun(file);
}

int main(){
	FILE *file;
	
	file=fopen("output.txt","r");
	
	printf("The content are :\n");
	rec_fun(file);
	
	return 0;
}
