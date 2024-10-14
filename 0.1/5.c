#include <stdio.h>
int main(){
	int num = 2;
	switch(num){
		case 1:printf("One\n");break;
		case 2:printf("Two\n");
		case 3:printf("Three\n");break;
		case 4:printf("Four\n");break;
		default: printf("Invalid\n");
	}
}


//the answer would print upto where the break statement in encountered upon 
// in this case the answer would be : 
// Two
//Three   -only.
