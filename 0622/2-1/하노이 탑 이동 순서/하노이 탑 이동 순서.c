#include <stdio.h>
#include <math.h>

void hanoi(int n, int first, int second, int third) {
	if (n == 1) {
		printf("%d %d\n", first, third);
		return;
	}

	hanoi(n - 1, first, third, second);
	printf("%d %d\n", first, third);
	hanoi(n - 1, second, first, third);
}

int main() {
	int N, count;
	scanf_s("%d", &N);

	//�ϳ��� �̵� Ƚ���� 2^n - 1
	count = pow(2, N);
	printf("%d\n", count - 1);

	//���� ���
	hanoi(N, 1, 2, 3);
} 