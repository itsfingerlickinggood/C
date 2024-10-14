#include <stdio.h>
int main(){
	int i=0;
	while(i<10){
		if(i==5){
			i++;
			continue;
		}
		printf("%d\n",i);
		i++;
		if(i==8){
			break;
		}
	}
}
