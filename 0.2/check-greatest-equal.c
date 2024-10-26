#include <stdio.h>
int main(){
	int a ,b ,c;
	printf("Enter the three number to check which is the largest : ");
	scanf("%d%d%d",&a,&b,&c);
	if((a==b && (a>c && b>c))){
		if(a>b){
			printf("%d and %d are equal and %d is the greatest1",a,b,a);
		}
		else{
			printf("%d and %d are equal and %d is the greatest1",a,b,b);
		}
		
	}
	else if((a==c && (a>b && c>b))){
		if(a>c){
			printf("%d and %d are equal and %d is the greatest1",a,c,a);
		}
		else{
			printf("%d and %d are equal and %d is the greatest1",a,c,c);
		}
	}
	else if((b==c && (b>a && c>a))){
		printf("%d and %d are equal and %d is the greatest3",b,c,a);
	}
	else if((a==b && (a<c && b<c))){
		printf("%d and %d are equal and %d is the greatest4",a,b,c);
	}
	else if((a==c && (a<b && c<b))){
		printf("%d and %d are equal and %d is the greatest5",a,c,b);
	}
	else if((b==c && (b<a && c<a))){
		printf("%d and %d are equal and %d is the greatest6",b,c,a);
	}
	else if(a==b && b==c){
		printf("All are equal and are of greatest");
	}
	else{
		if(a>b){
			if(a>c){
				printf("%d is the greatest",a);
			}
			else{
				printf("%d is the greatest",c);
			}
		}
		else{
			if(b>c){
				printf("%d is the greatest",b);
			}
			else{
				printf("%d is the greatest",c);
			}
		}
	}
	return 0;
}
