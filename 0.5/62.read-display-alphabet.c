#include<stdio.h>
#include<string.h>

int main(){
	int size;
	printf("Enter the no of names : ");
	scanf("%d",&size);
	
	char names[size][100],temp[100];
	
	int i,j;
	
	for(i=0;i<size;i++){
		printf("Enter name %d : ",i+1);
		scanf("%s",names[i]);
	}
	
	for(i=0;i<size;i++){
		for(j=0;j<i;j++){
			if(strcmp(names[i],names[j])<0){
				strcpy(temp,names[i]);
				strcpy(names[i],names[j]);
				strcpy(names[j],temp);
			}
		}
	}
	
	printf("The names in alphabetical order is : \n");
	for(i=0;i<size;i++){
		printf("%s\n",names[i]);
	}
	
	return 0;
}
