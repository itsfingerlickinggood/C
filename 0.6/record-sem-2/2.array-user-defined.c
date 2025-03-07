#include<stdio.h>
#define MAX 100

/*Here it sets the array size predefined to 100 */
int arr[MAX],pos=0; 

void insert(int element){
	arr[pos]=element;
	pos++;
}

void display(){
	int i;
	printf("\nThe element in Array are : \n");
	for(i=0;i<pos;i++){
		printf(" %d ",arr[i]);
	}
}

void search(int element){
	int isFound=0,i;
	for(i=0;i<pos;i++){
		if(arr[i]==element){
			isFound=1;
			break;
		}
	}
	if(isFound){
			printf("\nElement Found ! . Element is at position %d",i+1);
		}
	else{
			printf("\nElement not Found !");
	}
}

void del(int element){
	int isFound=0,i,j;
	for(i=0;i<pos;i++){
		if(arr[i]==element){
			isFound=1;
			for(j=i;j<pos;j++){
				arr[j]=arr[j+1];
			}
			pos--;
			break;
		}
	}
	if(isFound){
		printf("\nElement is deleted !");
	}
	else{
		printf("\nElement is not to be found and therefore cannot be deleted !");
	}
	
}

void sort(){
	int temp,j,i;
	for(i=0;i<pos-1;i++){
		for(j=0;j<pos-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}


int main(){
	int choice;
	char ans='y';
	while(ans=='y'){
		
		printf("-------------\n");
		printf("|   ARRAY   |\n");
		printf("-------------\n");
		printf("| 1.Insert  |\n");
		printf("| 2.Display |\n");
		printf("| 3.Search  |\n");
		printf("| 4.Delete  |\n");
		printf("| 5.Sort    |\n");
		printf("| 6.Exit    |\n");
		printf("-------------\n");
		
		printf("Enter your choice : ");
		scanf("%d",&choice);
		
		int ins,srch,dl;
		
		switch(choice){
			case 1:
				printf("\nEnter the element to be inserted : ");
				scanf("%d",&ins);
				insert(ins);
				break;
			case 2:
				printf("\nThe array is : ");
				display();
				break;
			case  3:
				printf("\nEnter the element to be searched : ");
				scanf("%d",&srch);
				search(srch);
				break;
			case 4:
				printf("\nEnter the element to be deleted : ");
				scanf("%d",&dl);
				del(dl);
				break;
			case 5:
				printf("\nThe sort array is : \n");
				sort();
				display();
				break;
			case 6:
				break;
			default:
				printf("Invalid Choice ! \n");
		}
		
		printf("\nDo you want to continue ? (y->yes/n->no) : ");
		scanf(" %c",&ans);
	}
	
	
	return 0;
}
