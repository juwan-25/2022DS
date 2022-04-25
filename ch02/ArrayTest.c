#include <stdio.h>

int main()
{
	char a[17] = "Walls have ears.";
	char b[5][10] = { {"    A"},{"   ABC"},{"  ABCDE"},{" ABCDEFG"},{"ABCDEFGHI"} };
	printf("%s\n", a);

	for (int i = 17; i >= 0; i--)
		printf("%c", a[i]);
	printf("\n");

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 10; j++) {
			if (b[i][j] == ' ') continue;
			else printf("%c", b[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 10; j++) {
			if (j == 4) {
				printf("%c\n", b[i][j]);
				break;
			}
			else printf(" ");
		}
	}

	return 0;

}