#include<stdio.h>
int main(){
	char a[50];
	
	printf("Enter the string : ");
	scanf("%s",a);
	
	int count,i;
	
	for(i=0;a[i]!='\0';i++){
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'){
			count++;
		}
	}
	
	printf("The no of vowels in %s is %d",a,count);
	
	return 0;
}
