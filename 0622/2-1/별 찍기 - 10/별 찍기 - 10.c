#include <stdio.h>
#include <stdlib.h>

int star(int n, int k, int* result, int blank) {
    
}

int main() {
    int N, k = 0;
    int* result;

    scanf_s("%d", &N);
    result = (int*)malloc((N * N) * sizeof(int));
    star(N, 0, result, 0);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            /*
            if (result[k] == 1)
                printf(" ");
            else
                printf("*");

            k++;
            */
            printf("%d", result[k++]);
        }
        printf("\n");
    }
    return 0;
}