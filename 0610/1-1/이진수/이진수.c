#include <stdio.h>

int main() {
	int T, n;

	scanf_s("%d", &T);

	for (int i = T; i > 0; i--) {
		scanf_s("%d", &n);

		//�������� ���� �ڸ����� �ϳ��� ������ �Ǳ� ������ 1�̸� �� ��ġ(j)�� ���
		for (int j = 0; n > 0; j++) {
			if (n % 2 == 1)
				printf("%d ", j);
			n /= 2;
		}

		printf("\n");
	}

	return 0;
}