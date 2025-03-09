#include<stdio.h>

int i,j;

void add_M(int a[][50],int b[][50],int row,int col){
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf(" %d ",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
	
}

void sub_M(int a[][50],int b[][50],int row,int col){
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf(" %d ",a[i][j]-b[i][j]);
		}
		printf("\n");
	}
}

void mul_M(int a[][50],int b[][50],int row,int col){
	int res[50][50],i,j,k;
	if(row==col){
		for(i=0;i<row;i++){
			for(j=0;j<col;j++){
				res[i][j]=0;
				for(k=0;k<col;k++){
					res[i][j]+=a[i][k]*b[k][j];
				}
				printf(" %d ",res[i][j]);
			}
			printf("\n");
		}
	}
	else{
		printf("\nMatrix Multiplication is not possible for these two Matrices !");
	}
}

void trp_M(int a[][50],int row,int col){
	for(i=0;i<col;i++){
		for(j=0;j<row;j++){
			printf(" %d ",a[j][i]);
		}
		printf("\n");
	}
}

int det_M(int a[][50],int n){
	int det=0,temp[50][50],sign=1,x,i,j,subi,subj;
	
	if(n==1){
		det=a[0][0];
	}
	else{
		for(x=0;x<n;x++){
			subi=0;
			for(i=1;i<n;i++){
				subj=0;
				for(j=0;j<n;j++){
					if(j==x) continue;
					temp[subi][subj]=a[i][j];
					subj++;
				}
				subi++;
			}
			det+=sign*a[0][x]*det_M(temp,n-1);
			sign=-sign;
		}
	}
	
	return det;
}

int main(){
	
	int row,col,choice_Arr;
	
	printf("Enter the no: of rows and columns for ARRAY-1 and ARRAY-2: ");
	scanf("%d%d",&row,&col);
	int arr1[50][50],arr2[50][50];
	
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("Enter element at pos-[%d][%d] for ARRAY-1 : ",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("Enter element at pos-[%d][%d] for ARRAY-2 : ",i,j);
			scanf("%d",&arr2[i][j]);
		}
	}
	
	char ans='y';
	
	while(ans=='y'){
		
		int choice;
		
		printf("\n1.Add-Matrices\n2.Subtract-Matrices\n3.Multiply-Matrices\n4.Transpose-Matrix\n5.Determinant-Matrix");
		printf("\n\nEnter your choice : ");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:
				add_M(arr1,arr2,row,col);
				break;
			case 2:
				sub_M(arr1,arr2,row,col);
				break;
			case 3:
				mul_M(arr1,arr2,row,col);
				break;
			case 4:
				
				printf("\n1.array-1\n2.array-2\nEnter the choice to find the transpose of which array :  ");
				scanf("%d",&choice_Arr);
				if(choice_Arr==1){
					trp_M(arr1,row,col);
				}
				else if (choice_Arr==2){
					trp_M(arr2,row,col);
				}
				else{
					printf("Invalid Choice !");
				}
				break;
			case 5:
				if(row==col){
					printf("\n1.array-1\n2.array-2\nEnter the choice to find the transpose of which array :  ");
					scanf("%d",&choice_Arr);
					if(choice_Arr==1){
						printf("\nDeterminant: %d", det_M(arr1, row));
					}
					else if (choice_Arr==2){
						printf("\nDeterminant: %d", det_M(arr2, row));
					}
					else{
						printf("Invalid Choice !");
					}
				}
				else{
					printf("\nDeterminant Cannot be calculated !");
				}
				break;
			default:
				printf("\nInvalid Choice !");
		}	
			
		printf("\nDo you want to continue ? (y->Yes/n->No) : ");
		scanf(" %c",&ans);
	}
	
	return 0;
}
