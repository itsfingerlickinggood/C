#include<stdio.h>
#include <ctype.h>

int main(){
	char a,b;
	
	printf("Enter the character : ");
	scanf("%c",&a);
	
	b=tolower(a);
	
	if(b=='a'||b=='e'||b=='i'||b=='o'||b=='u'){
		printf("\n\tThe given character %c is a VOWEL !",a);
	}
	else{
		printf("\n\tThe given character %c is not a VOWEL !",a);
	}
}			
