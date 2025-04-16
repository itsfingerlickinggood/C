#include<stdio.h>

void recrev(int a[],int size,int position){
	if(position<0){
		return;
	}
	printf(" %d ",a[position]);
	recrev(a,size,position-1);
}

int main(){
	
	int size,pos,i;
	
	printf("Enter the size for the array : ");
	scanf("%d",&size);
	
	pos=size-1;
	
	int a[size];
	
	for(i=0;i<size;i++){
		printf("Enter the element at the position->%d : ",i);
		scanf("%d",&a[i]);
	}
	
	recrev(a,size,pos);
	
	return 0;
}
