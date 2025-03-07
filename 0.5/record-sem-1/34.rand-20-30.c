#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	char ans='y';
	do{
		int player,computer,i=1;
		srand(time(0));
		computer=(rand()%11)+20;
		
		printf("\nEnter a number between 20 and 30 to guess the computer prediction number between 20 and 30 :");
		scanf("%d",&player);
	
		if(player>=20 && player<=30){
			while(player!=computer){
			if(player==computer){
				break;
			}
			else{
				printf("Enter again : ");
				scanf("%d",&player);
				i++;
			}
		}
			
		printf("\nThe player predicted the number in %d TRIES !",i);
		}
		else{
			printf("\nInvlaid Number . Try AGAIN ! . Number should be between 20 AND 30 !\n");
		}
		
		printf("\nDo you want to continue ? (y->(yes)/n->(no)) : ");
		scanf(" %c",&ans);
	}while(ans=='y');
	
	return 0;
}
