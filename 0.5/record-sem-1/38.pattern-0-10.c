#include<stdio.h>
int main(){
	int i,j,row=6;
	for(i=0;i<row;i++){
		int start;
		if(i==0 || i==3 || i==4){
			start=1;
		}
		else{
			start=0;
		}
		for(j=0;j<=i;j++){
			printf("%d\t",start);
			start=1-start;
		}
		printf("\n");
	}
	
	return 0;
}
