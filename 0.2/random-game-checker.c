#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main ()
{
	int a;
	srand(time(NULL));
	int random = (rand()%10)+1;
	printf("enter a number : " );
	scanf("%d",&a);
	if(a==random)
	{
		printf("you win ");
	}
	else
	{
		printf("you lose ");
	}
	
	printf("\n%d is the number by computer",random);
}
