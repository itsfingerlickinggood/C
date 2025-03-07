#include<stdio.h>

int main(){
	
	int size,i,j;
	
	printf("Enter the size of array : ");
	scanf("%d",&size);
	
	int arr[size],freq[size];
	
	for(i=0;i<size;i++){
		printf("Enter the element at %d : ",i);
		scanf("%d",&arr[i]);
		freq[i]=-1;
	}
	
	int count;
	
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
	
	printf("\nElement | Frequency\n");
	printf("--------------------");
	for(i=0;i<size;i++){
		if(freq[i]!=0){
			printf("\n%d       | %d",arr[i],freq[i]);
		}
	}
		
	return 0;
}
