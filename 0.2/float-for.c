#include <stdio.h>
int main(){
	float i;
	for(i=0.01;i<=1.0;i+=0.01){
		printf("%.3f\n",i);
	}
	return 0;
}
