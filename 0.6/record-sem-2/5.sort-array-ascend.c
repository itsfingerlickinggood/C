#include<stdio.h>
#define MAX 100

int arr[MAX],pos=0,i,j;


void insert(int element){
	arr[pos]=element;
	pos++;
}

void display(){
	for(i=0;i<pos;i++){
		printf(" %d ",arr[i]);
	}
}

void sort(){
	int temp;
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

int main()
{
	char ans='y';
	while(ans=='y'){
		int choice,ins;
		
		printf("1.Insert\n2.Display\n3.Sort\n4.Exit\n");
		printf("\nEnter your choice : ");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:
				printf("Enter your element to be inserted : ");
				scanf("%d",&ins);
				insert(ins);
				break;
			case 2:
				display();
				break;
			case 3:
				sort();
				display();
				break;
			case 4:
				break;
			default:
				printf("Invalid Choice !. ");
		}
		
		printf("\nDo you want to continue ? (y->Yes/n->No) : ");
		scanf(" %c",&ans);
	}
	return 0;
}
