#include<stdio.h>
int main(){
	char a;
	printf("Enter a character to check whether it is vowel or consonant : ");
	scanf("%c",&a);
	if (a=='A'||a=='a'||a=='E'||a=='e'||a=='I'||a=='i'||a=='O'||a=='o'||a=='U'||a=='u') {
		printf("The character '%c' is a vowel !",a);
	}
	else{
		printf("The character '%c' is consonant",a);
	}
	return 0;
}
