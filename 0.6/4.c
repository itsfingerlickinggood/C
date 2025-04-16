#include<stdio.h>

int main(){
	int size;
	printf("Enter the size of the array : ");
	scanf("%d",&size);
	int arr[size],freq[size];
	int i,j,count;
	for(i=0;i<size;i++){
		printf("Enter the element at %d : ",i);
		scanf("%d",&arr[i]);
		freq[i]=-1;
	}
	for(i=0;i<size;i++){
		if(freq[i]!=-1) continue;
		count=1;
		for(j=i+1;j<size;j++){
			if(arr[i]==arr[j]){
				count++;
				freq[j]=0;
			}
		}
		freq[i]=count;
	}
	for(i=0;i<size;i++){
		if(freq[i]!=0){
			printf("\nElement %d has %d occurences",arr[i],freq[i]);
		}
	}
	return 0;
}
