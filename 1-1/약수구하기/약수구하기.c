#include <stdio.h>

int main(void) {
	int N, K;
	int count = 0, answer = 0;

	scanf_s("%d %d", &N, &K);

	for (int i = 1; i <= N; i++) {
		if (N % i == 0) {
			count++;

			if (count == K) {
				answer = i;
				break;
			}
		}
	}

	printf("%d", answer);
	return 0;
}