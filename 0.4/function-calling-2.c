#include<stdio.h>
int main(){
	int a(int b){
		printf("\n%d",b);
		b=b-1;
		if(b==1){
			printf("\n%d\n",b);
			return 0;
		}
		a(b);
	}
	a(5);
	return 0;
}
