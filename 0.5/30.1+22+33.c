#include<stdio.h>
int main(){
	int a;
	printf("Enter the number to find the pattern of (1 + 2/2! + 3/3!) : ");
	scanf("%d",&a);
	
	int i,j;
	float factorial,sum=0;
	
	for(i=1;i<=a;i++){
		factorial=1;
		for(j=1;j<=i;j++){
			factorial*=j;
		}
		sum+=i/factorial;
	}
	
	printf("The sum of the sequence of (1 + 2/2! + 3/3!) is %.3f:",sum);
	
	return 0;	
}
