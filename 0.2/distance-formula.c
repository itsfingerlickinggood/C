#include <stdio.h>
#include <math.h>

int main(){
	int x1,x2,y1,y2,ans;
	printf("Input x1: ");
	scanf("%d",&x1);
	printf("Input x2: ");
	scanf("%d",&x2);
	printf("Input y1: ");
	scanf("%d",&y1);
	printf("Input y2: ");
	scanf("%d",&y2);
	ans=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
	printf("The distance is: %d",ans);
	return 0;
}
