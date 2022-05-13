#include <stdio.h>
#include <stdlib.h>
#define SIZE 1000000

int main()
{
	int* a = (int*)malloc(sizeof(int) * SIZE);
	
	a[0] = 10;
	printf("%d\n", a[0]);

	free(a);
	//동적할당 후 해제 필요

	return 0;
}