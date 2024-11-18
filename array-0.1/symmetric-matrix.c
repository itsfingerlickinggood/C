#include<stdio.h>
int main(){
	int a,b;
	printf("Enter the no of rows : ");
	scanf("%d",&a);
	printf("Enter the no of columns : ");
	scanf("%d",&b);
	
	int array[a][b],i,j;
	
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("Enter the element at the position [%d][%d] : ",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	
	printf("\nThe Matrix is : \n");
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("\t%d",array[i][j]);
		}
		printf("\n");
	}
	
	int array2[b][a];
	
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			array2[j][i]=array[i][j];
		}
	}
	
	printf("\nThe Transpose of the Matrix is : \n");
	for(i=0;i<b;i++){
		for(j=0;j<a;j++){
			printf("\t%d",array2[i][j]);
		}
		printf("\n");
	}
	
	int isSym = 1; 
    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            if (a!=b || array[i][j] != array2[j][i]) {
                isSym = 0;
                break;
            }
        }
        if (!isSym) break;
    }

    if (isSym) {
        printf("\nThe matrix is symmetric.\n");
    } else {
        printf("\nThe matrix is no symmetric.\n");
    }

    return 0;
}
