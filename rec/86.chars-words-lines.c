#include<stdio.h>
#include<ctype.h>
int main(){
	int total_words=0,total_char=0,total_line=0,isWord=0;
	FILE *file;
	char ch;
	
	file = fopen("output.txt","r");
	
	while((ch=fgetc(file))!=EOF){
		total_char++;
		if(ch=='\n'){
			total_line++;
		}
		if(isspace(ch)){
			isWord=0;
		}
		else if(!isWord){
			total_words++;
			isWord=1;
		}
	}
	
	printf("\nTotal words : %d\nTotal lines : %d\nTotal characters : %d\n",total_words,total_line,total_char);
	
	fclose(file);
	
	return 0;
}
