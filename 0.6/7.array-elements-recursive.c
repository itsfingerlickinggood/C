#include<stdio.h>

void rec(int arr[],int size,int pos){
	if(size==pos){
		return;
	}
	printf(" %d ",arr[pos]);
	rec(arr,size,pos+1);
}

int main(){
	
	int size,position=0,i;
	
	printf("Enter the size for the array : ");
	scanf("%d",&size);
	
	int a[size];
	
	for(i=0;i<size;i++){
		printf("Enter the element at the position->%d : ",i);
		scanf("%d",&a[i]);
	}
	
	rec(a,size,position);
	
	return 0;
}
