#include <stdio.h>
int main(){
	int a;
	printf("Enter the mark(out of 100) to find the Grade: ");
	scanf("%d",&a);
	if(a>=90){
		pritnf("A grade");
	}
	else if(a>=80){
		printf("B grade");
	}
	else if(a>=70){
		printf("C grade");
	}
	else if(a>=60){
		printf("D grade");
	}
	else if(a>=50){
		printf(" E grade");
	}
	else{
		printf("F grade")
	}
}
