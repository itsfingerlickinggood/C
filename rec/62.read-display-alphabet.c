#include<stdio.h>
#include<string.h>

int main(){
	
	char ans='y';
	
	while(ans=='y'){
		
		int size;
		
		printf("Enter the no of names : ");
		scanf("%d",&size);
		
		char names[size][100],temp[100];
		
		int i,j;
		
		for(i=0;i<size;i++){
			printf("Enter name %d : ");
			scanf("%s",names[i]);
		}
		
		 for (i = 0; i < a - 1; i++) {
        for (j = i + 1; j < a; j++) {
            if (strcmp(names[i], names[j]) > 0) { // Compare and swap
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
    
    printf("\nNames in alphabetical order:\n");
    for (i = 0; i < a; i++) {
        printf("%s\n", names[i]);
    }
    
		
		printf("Do you want to continue (y/n) : ");
		scanf("%c",&ans);
	}
	
	return 0;
}
