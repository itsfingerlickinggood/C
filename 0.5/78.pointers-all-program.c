#include<stdio.h>
#include<stdlib.h>

int main(){
	
	char ans='y';
	
	while(ans=='y'){
		
	printf("\n---------------------------------------------------------------");
	printf("\n|Pointers and Implementing Dynamic Memory Allocation Functions|");
	printf("\n---------------------------------------------------------------\n");
	
	int choice1;
	
	printf("1.One-Dimensional Array\n2.Two-Dimensional Array\n\nEnter your choice : ");
	scanf("%d",&choice1);
	
	if(choice1==1){
		
		int size,i,choice2;
		
		printf("Enter the no of elements to be added : ");;
		scanf("%d",&size);
		
		printf("\n1.malloc()\n2.calloc()\n\nChoose one of the above dynamic memory functions to use : ");
		scanf("%d",&choice2);
		
		if(choice2==1){
			
			int *arr,i;
			
			arr=(int*)malloc(size*sizeof(int));
			
			for(i=0;i<size;i++){
				printf("Enter the element at the position - %d : ",i);
				scanf("%d",&arr[i]);
			}
			
			printf("The elements are : ");
			for(i=0;i<size;i++){
				printf(" %d ",arr[i]);
			}
			
			int choice3;
			
			printf("\n1.Add Memory\n2.Remove Mmemory\n3.Exit\n\nEnter choice : ");
			scanf("%d",&choice3);
			
			if(choice3==1){
				
				int size_add,org_size_copy;
				
				printf("Enter the additional no of elements to be added : ");
				scanf("%d",&size_add);
				
				org_size_copy=i;
				
				size+=size_add;
				
				arr=(int*)realloc(arr,size*sizeof(int));
				
				for(i=0;i<size_add;i++){
					printf("Enter the element at %d : ",i+org_size_copy);
					scanf(" %d ",&arr[i+org_size_copy]);
				}
				
				printf("The elements are : ");
				for(i=0;i<size;i++){
					printf("%d",arr[i]);
				}
				
			}
			else if(choice3==2){
				int size_remove;
				
				printf("Enter the no of elements to be needed : ");
				scanf("%d",&size_remove);
				
				size=size_remove;
				
				arr=(int*)realloc(arr,size*sizeof(int));
				
				printf("The elements are : ");
				for(i=0;i<size;i++){
					printf(" %d ",arr[i]);
				}
				
			}
			else if(choice3==3){
				printf("\nExited !\n");
			}
			else{
				printf("Invalid Choice !");
			}
			
			free(arr);
			
		}
		else if(choice2==2){
			
			int *arr,i;
			
			arr=(int*)calloc(size,sizeof(int));
			
			for(i=0;i<size;i++){
				printf("Enter the element at the position - %d : ",i);
				scanf("%d",&arr[i]);
			}
			
			printf("The elements are : ");
			for(i=0;i<size;i++){
				printf("%d",arr[i]);
			}
			
			int choice3;
			
			printf("\n1.Add Memory\n2.Remove Mmemory\n3.Exit\n\nEnter choice : ");
			scanf("%d",&choice3);
			
			if(choice3==1){
				
				int size_add,org_size_copy;
				
				printf("Enter the additional no of elements to be added : ");
				scanf("%d",&size_add);
				
				org_size_copy=i;
				
				size+=size_add;
				
				arr=(int*)realloc(arr,size*sizeof(int));
				
				for(i=0;i<size_add;i++){
					printf("Enter the element at %d : ",i+org_size_copy);
					scanf("%d",&arr[i+org_size_copy]);
				}
				
				printf("The elements are : ");
				for(i=0;i<size;i++){
					printf("%d",arr[i]);
				}
				
			}
			else if(choice3==2){
				int size_remove;
				
				printf("Enter the no of elements to be needed : ");
				scanf("%d",&size_remove);
				
				size=size_remove;
				
				arr=(int*)realloc(arr,size*sizeof(int));
				
				printf("The elements are : ");
				for(i=0;i<size;i++){
					printf("%d",arr[i]);
				}
				
			}
			else if(choice3==3){
				printf("\nExited !\n");
			}
			else{
				printf("Invalid Choice !");
			}
			
			free(arr);
			
		}
		else{
			printf("Invalid Choice !");
		}
		
	}
	else if(choice1==2){
		
		int choice4;
		
		printf("\n1.Create 2-D array using array of pointers\n2.Create a 2-D array using a single block of memory");
		printf("\n\nEnter your choice : ");
		scanf("%d",choice4);
		
		if(choice4==1){
			
			int rows,columns,**arr,i,j;
			
			printf("Enter the no of rows : ");
			scanf("%d",&rows);
			printf("Enter the no of columns : ");
			scanf("%d",&columns);
			
			arr=(int**)malloc(rows*sizeof(int*));
			
			for(i=0;i<rows;i++){
				arr[i]==(int*)malloc(columns*sizeof(int));
			}
			
			for(i=0;i<rows;i++){
				for(j=0;j<columns;j++){
					printf("Enter element at position [%d][%d] : ");
					scanf("%d",&arr[i][j]);
				}
			}
			
			printf("\nThe elements of array are : \n");
			for(i=0;i<rows;i++){
				for(j=0;j<columns;j++){
					printf(" %d ",arr[i][j]);
				}
				printf("\n");
			}
			
			int choice5;
			
			printf("\n1.Add Row/Column to array\n2.Remove Row/Column to array\n3.Exit\n\nEnter your choice : ");
			scanf("%d",&choice5);
			
			if(choice5==1){
					
					int choice6;
					printf("\n1.Add row\n2.Add column\n3.Add both row and column\n\nEnter your choice : ");
					scanf("%d",&choice6);
					
					if(choice6==1){
						
						int add_rows,org_rows;
						printf("Enter how much rows needed to be added : ");
						scanf("%d",&add_rows);
						
						org_rows=rows;
						rows+=add_rows;
						
						arr=(int**)realloc(arr,rows*sizeof(int*));
						
						for(i=0;i<rows;i++){
							arr[i]==(int*)realloc(arr[i],columns*sizeof(int));
						}
						
						int k=i,l=j;
						
						for(k;k<rows;k++){
							for(l;l<columns;l++){
								printf("Enter element at position [%d][%d] : ");
								scanf("%d",&arr[k][l]);
							}
						}
			
						printf("\nThe elements of array are : \n");
						for(i=0;i<rows;i++){
							for(j=0;j<columns;j++){
								printf(" %d ",arr[i][j]);
							}
							printf("\n");
						}
						
					}
					else if(choice6==2){
						
						int add_cols,org_cols;
						printf("Enter how much columns needed to be added : ");
						scanf("%d",&add_cols);
						
						org_cols=columns;
						columns+=add_cols;
						
						arr=(int**)realloc(arr,rows*sizeof(int*));
						
						for(i=0;i<rows;i++){
							arr[i]==(int*)realloc(arr[i],columns*sizeof(int));
						}
						
						int k=i,l=j;
						
						for(k;k<rows;k++){
							for(l;l<columns;l++){
								printf("Enter element at position [%d][%d] : ");
								scanf("%d",&arr[k][l]);
							}
						}
			
						printf("\nThe elements of array are : \n");
						for(i=0;i<rows;i++){
							for(j=0;j<columns;j++){
								printf(" %d ",arr[i][j]);
							}
							printf("\n");
						}
						
					}
					else if(choice6==3){
						
						int add_rows_st,org_rows_st,add_cols_st,org_cols_st;
						printf("Enter how much rows needed to be added : ");
						scanf("%d",&add_rows_st);
						printf("Enter how much columns needed to be added : ");
						scanf("%d",&add_cols_st);
						
						org_rows_st=rows;
						rows+=add_rows_st;
						org_cols_st=columns;
						columns+=add_cols_st;
						
						arr=(int**)realloc(arr,rows*sizeof(int*));
						
						for(i=0;i<rows;i++){
							arr[i]==(int*)realloc(arr[i],columns*sizeof(int));
						}
						
						int k=i,l=j;
						
						for(k;k<rows;k++){
							for(l;l<columns;l++){
								printf("Enter element at position [%d][%d] : ");
								scanf("%d",&arr[k][l]);
							}
						}
			
						printf("\nThe elements of array are : \n");
						for(i=0;i<rows;i++){
							for(j=0;j<columns;j++){
								printf(" %d ",arr[i][j]);
							}
							printf("\n");
						}
						
					}
					else{
						printf("Invalid choice !");
					}
				
			}
			else if(choice5==2){
				
				int choice7;
					printf("\n1.Remove row\n2.Remove column\n3.Remove both row and column\n\nEnter your choice : ");
					scanf("%d",&choice7);
					
					if(choice7==1){
						
						int remove_rows;
						printf("Enter how much rows needed to be added : ");
						scanf("%d",&remove_rows);
						
						rows=remove_rows;
						
						arr=(int**)realloc(arr,rows*sizeof(int*));
						
						for(i=0;i<rows;i++){
							arr[i]==(int*)realloc(arr[i],columns*sizeof(int));
						}
			
						printf("\nThe elements of array are : \n");
						for(i=0;i<rows;i++){
							for(j=0;j<columns;j++){
								printf(" %d ",arr[i][j]);
							}
							printf("\n");
						}
						
					}
					else if(choice7==2){
						
						int remove_cols;
						printf("Enter how much columns needed to be added : ");
						scanf("%d",&remove_cols);
					
						columns=remove_cols;
						
						arr=(int**)realloc(arr,rows*sizeof(int*));
						
						for(i=0;i<rows;i++){
							arr[i]==(int*)realloc(arr[i],columns*sizeof(int));
						}
			
						printf("\nThe elements of array are : \n");
						for(i=0;i<rows;i++){
							for(j=0;j<columns;j++){
								printf(" %d ",arr[i][j]);
							}
							printf("\n");
						}
						
					}
					else if(choice7==3){
						
						int remove_rows_st,remove_cols_st;
						printf("Enter how much rows needed to be removed : ");
						scanf("%d",&remove_rows_st);
						printf("Enter how much columns needed to be removed : ");
						scanf("%d",&remove_cols_st);
						
						rows=remove_rows_st;
						columns=remove_cols_st;
						
						arr=(int**)realloc(arr,rows*sizeof(int*));
						
						for(i=0;i<rows;i++){
							arr[i]==(int*)realloc(arr[i],columns*sizeof(int));
						}
			
						printf("\nThe elements of array are : \n");
						for(i=0;i<rows;i++){
							for(j=0;j<columns;j++){
								printf(" %d ",arr[i][j]);
							}
							printf("\n");
						}
						
					}
					else{
						printf("Invalid choice !");
					}
				
			}
			else if(choice5==3){
				printf("\nExited !");
			}
			
			
			free(arr);
		}
		else if(choice4==2){
			
			int *arr,i,j,rows,column;
			
			printf("Enter the no of rows : ");
			scanf("%d",&rows);
			printf("Enter the no columns : ");
			scanf("%d",&column);
			
			arr=(int*)malloc(rows*column*sizeof(int));
			
			for(i=0;i<rows;i++){
				for(j=0;j<column;j++){
					printf("Enter the element at positon [%d][%d] : ",i,j);
					scanf("%d",&arr[i*column+j]);
				}
			}
			
			printf("\nThe elements of array are : \n");
			for(i=0;i<rows;i++){
				for(j=0;j<column;j++){
					printf(" %d ",arr[i*column+j]);
				}
				printf("\n");
			}
			
			int choice8;
			
			printf("\n1.Add Row/Column to array\n2.Remove Row/Column to array\n3.Exit\n\nEnter your choice : ");
			scanf("%d",&choice8);
			
			if(choice8==1){
				
				int choice9;
					printf("\n1.Add row\n2.Add column\n3.Add both row and column\n\nEnter your choice : ");
					scanf("%d",&choice9);
					
					if(choice9==1){
						
						int add_rows;
						printf("Enter how much rows needed to be added : ");
						scanf("%d",&add_rows);
						
						rows+=add_rows;
						
						arr=(int**)realloc(arr,rows*sizeof(int*));
						
						for(i=0;i<rows;i++){
							arr[i]=(int*)realloc(arr[i],column*sizeof(int));
						}
						
						int k=i,l=j;
						
						for(k;k<rows;k++){
							for(l;l<column;l++){
								printf("Enter element at position [%d][%d] : ",k,l);
								scanf("%d",&arr[k*column+l]);
							}
						}
			
						printf("\nThe elements of array are : \n");
						for(i=0;i<rows;i++){
							for(j=0;j<column;j++){
								printf(" %d ",arr[i*column+j]);
							}
							printf("\n");
						}
						
					}
					else if(choice9==2){
						
						int add_cols;
						printf("Enter how much columns needed to be added : ");
						scanf("%d",&add_cols);
						
						column+=add_cols;
						
						arr=(int**)realloc(arr,rows*sizeof(int*));
						
						for(i=0;i<rows;i++){
							arr[i]=(int*)realloc(arr[i],column*sizeof(int));
						}
						
						int k=i,l=j;
						
						for(k;k<rows;k++){
							for(l;l<column;l++){
								printf("Enter element at position [%d][%d] : ",k,l);
								scanf("%d",&arr[k*column+l]);
							}
						}
			
						printf("\nThe elements of array are : \n");
						for(i=0;i<rows;i++){
							for(j=0;j<column;j++){
								printf(" %d ",arr[i*column+j]);
							}
							printf("\n");
						}
						
					}
					else if(choice9==3){
						
						int add_rows_st,add_cols_st;
						printf("Enter how much rows needed to be added : ");
						scanf("%d",&add_rows_st);
						printf("Enter how much columns needed to be added : ");
						scanf("%d",&add_cols_st);
						
						rows+=add_rows_st;
						column+=add_cols_st;
						
						arr=(int**)realloc(arr,rows*sizeof(int*));
						
						for(i=0;i<rows;i++){
							arr[i]=(int*)realloc(arr[i],column*sizeof(int));
						}
						
						int k=i,l=j;
						
						for(k;k<rows;k++){
							for(l;l<column;l++){
								printf("Enter element at position [%d][%d] : ",k,l);
								scanf("%d",&arr[k*column+l]);
							}
						}
			
						printf("\nThe elements of array are : \n");
						for(i=0;i<rows;i++){
							for(j=0;j<column;j++){
								printf(" %d ",arr[i*column+j]);
							}
							printf("\n");
						}
						
					}
					else{
						printf("Invalid choice !");
					}
				
			}
			else if(choice8==2){
				
				int choice10;
					printf("\n1.Remove row\n2.Remove column\n3.Remove both row and column\n\nEnter your choice : ");
					scanf("%d",&choice10);
					
					if(choice10==1){
						
						int remove_rows;
						printf("Enter how much rows needed only : ");
						scanf("%d",&remove_rows);
						
						rows=remove_rows;
						
						arr=(int**)realloc(arr,rows*sizeof(int*));
						
						for(i=0;i<rows;i++){
							arr[i]=(int*)realloc(arr[i],column*sizeof(int));
						}
			
						printf("\nThe elements of array are : \n");
						for(i=0;i<rows;i++){
							for(j=0;j<column;j++){
								printf(" %d ",arr[i*column+j]);
							}
							printf("\n");
						}
						
					}
					else if(choice10==2){
						
						int remove_cols;
						printf("Enter how much columns needed only : ");
						scanf("%d",&remove_cols);
					
						column=remove_cols;
						
						arr=(int**)realloc(arr,rows*sizeof(int*));
						
						for(i=0;i<rows;i++){
							arr[i]=(int*)realloc(arr[i],column*sizeof(int));
						}
			
						printf("\nThe elements of array are : \n");
						for(i=0;i<rows;i++){
							for(j=0;j<column;j++){
								printf(" %d ",arr[i*column+j]);
							}
							printf("\n");
						}
						
					}
					else if(choice10==3){
						
						int remove_rows_st,remove_cols_st;
						printf("Enter how much rows needed only : ");
						scanf("%d",&remove_rows_st);
						printf("Enter how much columns needed only : ");
						scanf("%d",&remove_cols_st);
						
						rows=remove_rows_st;
						column=remove_cols_st;
						
						arr=(int**)realloc(arr,rows*sizeof(int*));
						
						for(i=0;i<rows;i++){
							arr[i]=(int*)realloc(arr[i],column*sizeof(int));
						}
			
						printf("\nThe elements of array are : \n");
						for(i=0;i<rows;i++){
							for(j=0;j<column;j++){
								printf(" %d ",arr[i*column+j]);
							}
							printf("\n");
						}
						
					}
					else{
						printf("Invalid choice !");
					}
				
			}
			else if(choice8==3){
				printf("\nExited !");
			}
			
			free(arr);
		}
		else{
			printf("Invalid Choice !");
		}
			
	}
	else{
		printf("Invalid Choice ! ");
	}
		
		printf("Do you want to continue (y->YES/n->NO) : ");
		scanf(" %c",&ans);
	}
	
	return 0;
}
