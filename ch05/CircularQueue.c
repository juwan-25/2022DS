#include <stdio.h>
#define SIZE 6
//���������� �ڵ����� �ʱ�ȭ ��(0����)
int cq[SIZE] = { 0, }, front = 0, rear = -1;
int cnt = 0;

int add(int data)
{
	if (cnt==SIZE) {
		printf("Queue is full\n");
		return -1;
	}
	cq[++rear%SIZE] = data;
	cnt++;
	return 0;
}

int delete(void)
{
	if (cnt==0) {
		printf("Queue is empty\n");
		return -1;
	}
	cnt--;
	return cq[front++%SIZE];
}

int main(void)
{
	add(10); add(20); add(30);
	printf("%d\n", delete()); printf("%d\n", delete());  printf("%d\n", delete()); printf("%d\n", delete()); 
	add(50); add(60); add(70); add(80); add(90); add(100); add(110);
	printf("%d\n", delete()); printf("%d\n", delete());  printf("%d\n", delete()); printf("%d\n", delete()); printf("%d\n", delete()); printf("%d\n", delete());printf("%d\n", delete());

	return 0;
}