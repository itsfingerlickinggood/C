#include<stdio.h>

void str_len(char str[]){
	int i;
	int count=0;
	for(i=0;str[i]!='\0';i++){
		count++;
	}
	printf("The length of the string-'%s' is %d",str,count);
}

void str_cpy(char str1[],char str2[]){
	int i;
	for(i=0;str1[i]!='\0';i++){
		str2[i]=str1[i];
	}
	str2[i]='\0';
	printf("STRING IS COPIED to string 2 and is %s",str2);
}

void str_cat(char str1[],char str2[]){
	int i,j=0;
	char str3[100];
	for(i=0;str1[i]!='\0';i++){
		str3[i]=str1[i];
	}
	for(j=0;str2[j]!='\0';j++){
		str3[i+j]=str2[j];
	}
	printf("The concatenated string is : %s",str3);
}

void str_rev(char str1[]){
	int i,end=0;
	for(i=0;str1[i]!='\0';i++){
		end++;
	}
	for(end;end>=0;end--){
		printf("The reversed string is %c",str1[end]);
	}
}

int str_cmp(char str1[],char str2[]){
	int i,value;
	for(i=0;str1[i]!='\0'||str2[i]!='\0';i++){
		if(str1[i]!=str2[i]){
			value=str1[i]-str2[i];
		}
		value=0;
	}
	if(value){
		printf("The strings are equal and returns %d",value);
	}
	else{
		printf("The strings are not equalt and returns %d",value);
	}
}

int main(){
	
	char ans='y';
	
	while(ans=='y'){
		char str1[50],str2[50];
		printf("Enter the two strings : ");
		scanf("%s%s",str1,str2);
		printf("\n\n1.String-Length\n2.String-Reverse\n3.String-Copy\n4.String-Concatenation\n5.String-Compare\n");
		int choice;
		printf("Enter your choice : ");
		scanf("%d",&choice);
		if(choice==1){
			int string_select;
			printf("\n1.%s\n2.%s");
			printf("\nChoice which string to find the length : ");
			scanf("%d",&string_select);
			if(string_select==1){
				str_len(str1);
			}
			else if(string_select==2){
				str_len(str2);
			}
			else{
				printf("Invalid Choice !");
			}
		}
		else if(choice==2){
			int stringrev_select;
			printf("\n1.%s\n2.%s");
			printf("\nChoice which string to reverse : ");
			scanf("%d",&stringrev_select);
			if(stringrev_select==1){
				str_rev(str1);
			}
			else if(stringrev_select==2){
				str_rev(str2);
			}
			else{
				printf("Invalid Choice !");
			}
		}
		else if(choice==3){
			int stringcopy_select;
			printf("\n1.%s\n2.%s");
			printf("(\n1.str1->str2\n2.str2->str1\nChoose which direction to be copied : ");
			scanf("%d",&stringcopy_select);
			if(stringcopy_select==1){
				str_cpy(str2,str1);
			}
			else if(stringcopy_select==2){
				str_cpy(str1,str2);
			}
			else{
				printf("Invalid Choice !");
			}
		}
		else if(choice==4){
			int stringcat_select;
			printf("\n1.%s\n2.%s");
			printf("(\n1.str1+str2\n2.str2-+str1\nChoose which direction to be concatenated : ");
			scanf("%d",&stringcat_select);
			if(stringcat_select==1){
				str_cat(str1,str2);
			}
			else if(stringcat_select==2){
				str_cat(str2,str1);
			}
			else{
				printf("Invalid Choice !");
			}
		}
		else if(choice==5){
			str_cmp(str1,str2);
		}
		else{
			printf("Invalid Chocie !");
		}
		
		printf("Do you want to continue ? (y-yes/n-no) : ");
		scanf("%c",&ans);
	}
	
	return 0;
}
