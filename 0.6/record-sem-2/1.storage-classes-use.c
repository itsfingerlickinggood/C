#include<stdio.h>

int a=20;

void autoStorageClass(){
	auto int a = 5;
	printf("%d -> uses auto storage class\n",a);
}

void registerStorageClass(){
	register int a = 10;
	printf("%d -> uses register storage class\n",a);
}

void staticStorageClass(){
	static int a = 15;
	a++;
	printf("%d -> uses static storage class\n",a);
}

void externStorageClass(){
	extern int a;
	printf("%d -> uses extern storage class\n",a);
}

int main(){
	autoStorageClass();
	registerStorageClass();
	staticStorageClass();
	externStorageClass();
	
	return 0;
}
