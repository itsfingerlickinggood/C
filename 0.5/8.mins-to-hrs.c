#include<stdio.h>
int main(){
	int a;
	
	printf("Enter the total no: of minutes to be converted to hr min format : ");
	scanf("%d",&a);
	
	printf("\n%d minutes in hour-min format is : %dhr %dmins",a,a/60,a%60);
	
	return 0;
}
