#include <stdio.h>
#define SIZE 6
//전역에서는 자동으로 초기화 됨(0으로)
int queue[SIZE] = { 0, }, front = 0, rear = -1;

int add(int data) 
{
	if (rear == SIZE - 1) {
		printf("Queue is full\n");
		return -1;
	}
	queue[++rear] = data;
	return 0;
}

int delete(void) 
{
	if (front > rear) {
		printf("Queue is empty\n");
		return -1;
	}
	return queue[front++];
}

int main(void)
{
	add(10); add(20); add(30);
	printf("%d\n", delete()); printf("%d\n", delete());  printf("%d\n", delete()); printf("%d\n", delete()); //underflow
	add(50); add(60); add(70); add(80); //overflow

	return 0;
}