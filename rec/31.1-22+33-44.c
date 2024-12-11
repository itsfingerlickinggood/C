#include<stdio.h>
int main(){
	int a,i,j;
	printf("Enter the numbe upto which to find series (1 - 2/2! + 3/3! - 4/4! + …. + n/n!)");
	scanf("%d",&a);
	
	float sum=0,factorial;
	
	for(i=1;i<=a;i++){
		factorial=1;
		for(j=1;j<=i;j++){
			factorial*=j;
		}
		if(i%2==0){
			sum-=i/factorial;
		}
		else{
			sum+=i/factorial;
		}
	}
	
	printf("The Sum is : %.3f",sum);
	
	return 0;
}
