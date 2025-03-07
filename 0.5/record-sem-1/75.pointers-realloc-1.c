#include<stdio.h>
#include<stdlib.h>

int main(){
	int size,*arr,i;
	
	printf("Enter how many elements to be added : ");
	scanf("%d",&size);
	
	arr=(int*)malloc(size*sizeof(int));
	
	if(arr==NULL){
		printf("Memory Allocation failed !");
		return 1;
	}
	
	for(i=0;i<size;i++){
		printf("Enter the element at position %d : ",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("The elements are :  ");
	for(i=0;i<size;i++){
		printf(" %d ",arr[i]);
	}
	
	int choice;
	
	printf("\n1.Add memory\n2.Remove Memory\n");
	printf("Enter choice : ");
	scanf("%d",&choice);
	
	if(choice==1){
		int size_add,j;
		
		printf("Enter the no of additional elements to be added : ");
		scanf("%d",&size_add);
		
		arr=(int*)realloc(arr,(size+size_add)*sizeof(int));
		
		j=size;
		size+=size_add;
		
		if(arr==NULL){
			printf("Memory Allocation failed !");
			return 1;
		}
		
		for(i=j;i<size;i++){
			printf("Enter element at position %d : ",i+1);
			scanf("%d",&arr[i]);
		}
		
		printf("The elements are :  ");
		for(i=0;i<size;i++){
			printf(" %d ",arr[i]);
		}
	}
		
	else if(choice==2){
		int size_remove;
		
		printf("Enter the size to be reduced : ");
		scanf("%d",&size_remove);
		
		if(size<size_remove || size_remove<0){
			printf("\nOperation cannot be done !");
		}
		else{
			arr=(int*)realloc(arr,size_remove*sizeof(int));
			
			if(arr==NULL){
				printf("Memory Allocation failed !");
				return 1;
			}
			
			size=size_remove;
		
			printf("The elements are :  ");
			for(i=0;i<size;i++){
				printf(" %d ",arr[i]);
			}
		}
	}
	else{
		printf("Invalid Chocie !");
	}
	
	free(arr);
	
	return 0;
}
