#include <stdio.h>
#define size 11

int main()
{
	char data[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H','I', 'J','\0' };
	int index, i;
	char value;
	printf("»ğÀÔ À§Ä¡ : ");
	scanf_s("%d", &index); getchar();
	printf("»ğÀÔ °ª : ");
	scanf_s("%c", &value,1); getchar();
	//i = size - 1;
	//while (i > index) {
	//	data[i] = data[i - 1];
	//	i--;
	//}
	for (int i = size - 1; i > index; i--)
		data[i] = data[i - 1];
	data[index] = value;
	printf("%c\n", data[index]);
	return 0;
}