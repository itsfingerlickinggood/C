#include<stdio.h>
#define size 20

int a[size],top=0;

void push(int a[],int push_element){
	if(top==size){
		printf("\nWarning : Array Overflow !");	
	}
	else{
		a[top]=push_element;
		top++;
	}
}

void pop(){
	if(top==0){
		printf("\nWarning : Array Underflow !");	
	}
	else{
		top--;
		printf("\n %d is popped ! ",a[top]);
	}
}

void display(){
	int i;
	for(i=0;i<top;i++){
		printf(" %d ",a[i]);
	}
}

int main(){
	int choice,push_element;
	
	char ans='y';
	
	while(ans=='y'){
		printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\nEnter Your Choice : ");
		scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("\nEnter the element to be pushed : ");
			scanf("%d",&push_element);
			push(a,push_element);
			break;
		case 2:
			pop();
			break;
		case 3:
			display();
			break;
			
		}
	
		printf("\nDo you want to continue ? (yes->y/no->n) : ");
		scanf(" %c",&ans);
	}
	
	return 0;
}
