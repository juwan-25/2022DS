#include <stdio.h>

int main()
{
	int i, j, b[5][3];
	int a[3][5] = { {5,41,24,6,10},
					{50,33,20,15,11},
					{7,17,35,21,16} };
	printf("배열 a 출력\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			b[j][i] = a[i][j];
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("배열 b 출력\n");
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}
			
	
	return 0;
}