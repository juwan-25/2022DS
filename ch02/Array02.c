#include <stdio.h>
#define size 11

int main()
{
	char data[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H','I', 'J','\0' };
	int index;
	printf("삭제 위치 : ");
	scanf_s("%d", &index); getchar();

	for (int i = index; i < size-1; i++)
		data[i] = data[i + 1];
	data[size - 1] = 0;

	printf("삭제 결과 : %s\n", data);
	return 0;
}