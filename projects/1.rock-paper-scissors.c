#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int game(char player[],char computer[]){
	if(strcmp(player,computer)==0){
		return -1;
	}
	else if(strcmp(player,"rock")==0 && strcmp(computer,"scissor")||
			strcmp(player,"paper")==0 && strcmp(computer,"rock")||
			strcmp(player,"scissor")==0 && strcmp(computer,"paper")
	){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
	char ans='y';
	while(ans=='y'){
		
		char player[10],computer[10];
		int n,game_result;
		
		printf("\n\n---------------------");
		printf("\n|-ROCK-PAPER-SCISSOR-|");
		printf("\n---------------------\n");
		
		printf("Enter your choice : ");
		scanf("%s",player);
		
		srand(time(NULL));
		n=rand()%100;
		
		if(n<33){
			strcpy(computer,"rock");
		}
		else if(n<66){
			strcpy(computer,"paper");
		}
		else{
			strcpy(computer,"scissor");
		}
		
		game_result=game(player,computer);
		
		if(game_result){
			printf("\nPLAYER WINS !");
		}
		else if(game_result==-1){
			printf("\nDRAW GAME !");
		}
		else{
			printf("\nCOMPUTER WINS !");
		}
		
		printf("\nDo you want to continue ?(Yes->y/No->n)");
		scanf(" %c",&ans);
	}
	
	return 0;
}
