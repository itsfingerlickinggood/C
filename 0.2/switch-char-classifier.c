#include <stdio.h>
int main(){
	char a;
	printf("Enter the character to check for Vowels , Consonants and Special characters : ");
	scanf("%c",&a);
	switch(a){
		case 'a':case 'A':case 'e':case 'E':case 'i':case 'I':case 'o':case 'O':case 'u':case 'U':
			printf("It the character %c is a vowel !",a);
			break;
		case 'b': case 'c': case 'd': case 'f': case 'g':
        case 'h': case 'j': case 'k': case 'l': case 'm':
        case 'n': case 'p': case 'q': case 'r': case 's':
        case 't': case 'v': case 'w': case 'x': case 'y':
        case 'z': case 'B': case 'C': case 'D': case 'F':
        case 'G': case 'H': case 'J': case 'K': case 'L':
        case 'M': case 'N': case 'P': case 'Q': case 'R':
        case 'S': case 'T': case 'V': case 'W': case 'X':
        case 'Y': case 'Z':
        	printf("It the character %c is a consonant !",a);
        	break;
        default:
        	printf("The character %c is a special character !",a);
			break;
	}
	return 0;
}
