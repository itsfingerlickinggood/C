#include<stdio.h>

void reverse(char ans[]){
	int i,count=0;
	while(ans[count]!='\0'){
		count++;
	}
	for(i=count-1;i>=0;i--){
		printf(" %c ",ans[i]);
	}
}

int main(){
	char ans[50];
	
	printf("Enter the string to be reversed : ");
	scanf("%s",ans);
	
	reverse(ans);
	
	return 0;
}
