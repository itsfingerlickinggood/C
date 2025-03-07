#include<stdio.h>

void insert(int arr[],int element,int *pos,int size){
	if(pos<size){
		arr[*pos]=element;
	}
	else{
		printf("\nARRAY-OVERFLOW !");
	}
}

void display(int arr[],int pos){
	int i;
	for(i=0;i<pos;i++){
		printf(" %d ",arr[i]);
	}
}

void search(int arr[], int pos,int element){
	int i,isFound=0;
	for(i=0;i<pos;i++){
		if(arr[i]==element){
			isFound=1;
			break;
		}
	}
	if(isFound){
		printf("\nElement Found ! and is at %d position",i+1);
	}
	else{
		printf("\nElement not Found !");
	}
}

void del(int arr[],int *pos,int element){
	int i,j,isDeleted=0;
	for(i=0;i<*pos;i++){
		if(arr[i]==element){
			for(j=i;j<*pos;j++){
				arr[j]=arr[j+1];
			}
			isDeleted=1;
			(*pos)--;
			break;
		}
		
	}
	if(isDeleted){
		printf("\nThe element %d is deleted !",element);
	}
	else{
		printf("\nThe element cannot be found !");
	}
}

void sort(int arr[],int pos){
	int i,j,temp;
	for(i=0;i<pos-1;i++){
		for(j=0;j<pos-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}


int main(){

	int size;
	printf("Enter the size of the array : ");
	scanf("%d",&size);
	
	int arr[size],pos=0;
	
	char ans = 'y';
	while(ans=='y'){
		
		printf("\n1.Insert\n2.Display\n3.Search\n4.Delete\n5.Sort\n6.Exit\n");
		int choice,ins,srch,delt;
		
		printf("\nEnter your choice : ");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:
				printf("\nEnter the element to be inserted : ");
				scanf("%d",&ins);
				insert(arr,&ins,pos,size);
				pos++;
				break;
			case 2:
				display(arr,pos);
				break;
			case 3:
				printf("Enter the element to be searched : ");
				scanf("%d",&srch);
				search(arr,pos,srch);
				break;
			case 4:
				printf("Enter the element to be deleted : ");
				scanf("%d",&delt);
				del(arr,&pos,delt);
				break;
			case 5:
				sort(arr,pos);
				display(arr,pos);
				break;
			case 6:
				break;
			default:
				printf("Invalid Choice !");
		}
		
		printf("\nDo you want to continue ? (yes->y/no->n) : ");
		scanf(" %c",&ans);
	}	
	return 0;
}
